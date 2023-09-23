#pragma once
#include "System/zzzz__NullConsoleDriver_def.hpp"
#include "System/zzzz__ConsoleKeyInfo_def.hpp"
#include "System/zzzz__IConsoleDriver_def.hpp"
//  Writing Method size for method: System::NullConsoleDriver.ReadKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ConsoleKeyInfo (System::NullConsoleDriver::*)(bool)>(&System::NullConsoleDriver::ReadKey)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x249080c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::NullConsoleDriver>::get(),
                            "ReadKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::NullConsoleDriver._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::NullConsoleDriver::*)()>(&System::NullConsoleDriver::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2489428;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::NullConsoleDriver>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IConsoleDriver
constexpr  System::NullConsoleDriver::operator System::IConsoleDriver() const noexcept {
return System::IConsoleDriver(::bs_hook::Il2CppWrapperType::instance);
}
 void System::NullConsoleDriver::__set_EmptyConsoleKeyInfo(System::ConsoleKeyInfo value)  {
::cordl_internals::setStaticField<System::ConsoleKeyInfo, "EmptyConsoleKeyInfo", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::NullConsoleDriver>::get>(std::forward<System::ConsoleKeyInfo>(value));
}
 System::ConsoleKeyInfo System::NullConsoleDriver::__get_EmptyConsoleKeyInfo()  {
return ::cordl_internals::getStaticField<System::ConsoleKeyInfo, "EmptyConsoleKeyInfo", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::NullConsoleDriver>::get>();
}
 System::ConsoleKeyInfo System::NullConsoleDriver::ReadKey(bool intercept)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::NullConsoleDriver>::get(),
                            "ReadKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ConsoleKeyInfo, false>(const_cast<void*>(instance), ___internal_method, intercept);
}
// Ctor Parameters []
 System::NullConsoleDriver::NullConsoleDriver()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<NullConsoleDriver>())) {}
 void System::NullConsoleDriver::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::NullConsoleDriver>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
