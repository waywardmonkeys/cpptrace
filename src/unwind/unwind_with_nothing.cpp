#ifdef CPPTRACE_UNWIND_WITH_NOTHING

#include "unwind.hpp"

#include <cstddef>
#include <vector>

namespace cpptrace {
namespace detail {
    std::vector<frame_ptr> capture_frames(std::size_t, std::size_t) {
        return {};
    }

    CPPTRACE_FORCE_NO_INLINE
    std::size_t safe_capture_frames(frame_ptr* buffer, std::size_t size, std::size_t skip, std::size_t max_depth) {
        return 0;
    }
}
}

#endif
