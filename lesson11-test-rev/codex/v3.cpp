#include <iostream>
#include <limits>
#include <locale>

class binary_num_put
    : public std::num_put<char> {
    template <typename T>
    iter_type common_put(iter_type out, std::ios_base& str, char_type fill,
                         T original, unsigned long long v) const {
        if (str.flags() & std::ios_base::basefield) {
            return this->std::num_put<char>::do_put(out, str, fill, original);
        }
        if (str.flags() & std::ios_base::showbase) {
            *out++ = '0';
            *out++ = str.flags() & std::ios_base::uppercase? 'B': 'b';
        }
        unsigned long long mask(1ull << (std::numeric_limits<unsigned long long>::digits - 1));
        while (mask && !(mask & v)) {
            mask >>= 1;
        }
        if (mask) {
            for (; mask; mask >>= 1) {
                *out++ = v & mask? '1': '0';
            }
        }
        else {
            *out++ = '0';
        }
        return out;
    }
    iter_type do_put(iter_type out, std::ios_base& str, char_type fill, long v) const {
        return common_put(out, str, fill, v, static_cast<unsigned long>(v));
    }
    iter_type do_put(iter_type out, std::ios_base& str, char_type fill, long long v) const {
        return common_put(out, str, fill, v, static_cast<unsigned long long>(v));
    }
    iter_type do_put(iter_type out, std::ios_base& str, char_type fill, unsigned long v) const {
        return common_put(out, str, fill, v, v);
    }
    iter_type do_put(iter_type out, std::ios_base& str, char_type fill, unsigned long long v) const {
        return common_put(out, str, fill, v, v);
    }
};

std::ostream& bin(std::ostream& out) {
    auto const& facet = std::use_facet<std::num_get<char>>(out.getloc());
    if (!dynamic_cast<binary_num_put const*>(&facet)) {
        std::locale loc(std::locale(), new binary_num_put);
        out.imbue(loc);
    }
    out.setf(std::ios_base::fmtflags(), std::ios_base::basefield);
    return out;
}

int main()
{
    std::cout << std::showbase << bin << 12345 << " "
              << std::dec << 12345 << "\n";
}