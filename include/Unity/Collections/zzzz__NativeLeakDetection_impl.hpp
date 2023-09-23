#pragma once
#include "Unity/Collections/zzzz__NativeLeakDetection_def.hpp"
//  Writing Method size for method: Unity::Collections::NativeLeakDetection.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Unity::Collections::NativeLeakDetection::Initialize)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2b28464;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Collections::NativeLeakDetection>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void Unity::Collections::NativeLeakDetection::__set_s_NativeLeakDetectionMode(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "s_NativeLeakDetectionMode", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Collections::NativeLeakDetection>::get>(std::forward<int32_t>(value));
}
 int32_t Unity::Collections::NativeLeakDetection::__get_s_NativeLeakDetectionMode()  {
return ::cordl_internals::getStaticField<int32_t, "s_NativeLeakDetectionMode", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Collections::NativeLeakDetection>::get>();
}
 void Unity::Collections::NativeLeakDetection::Initialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Collections::NativeLeakDetection>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
