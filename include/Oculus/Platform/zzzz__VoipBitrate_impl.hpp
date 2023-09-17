#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "Oculus/Platform/zzzz__VoipBitrate_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::VoipBitrate::VoipBitrate(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::Oculus::Platform::VoipBitrate::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Oculus::Platform::VoipBitrate::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::Oculus::Platform::VoipBitrate  ::Oculus::Platform::VoipBitrate::Unknown{0};
constexpr ::Oculus::Platform::VoipBitrate  ::Oculus::Platform::VoipBitrate::B16000{1};
constexpr ::Oculus::Platform::VoipBitrate  ::Oculus::Platform::VoipBitrate::B24000{2};
constexpr ::Oculus::Platform::VoipBitrate  ::Oculus::Platform::VoipBitrate::B32000{3};
constexpr ::Oculus::Platform::VoipBitrate  ::Oculus::Platform::VoipBitrate::B64000{4};
constexpr ::Oculus::Platform::VoipBitrate  ::Oculus::Platform::VoipBitrate::B96000{5};
constexpr ::Oculus::Platform::VoipBitrate  ::Oculus::Platform::VoipBitrate::B128000{6};
} // end anonymous namespace
