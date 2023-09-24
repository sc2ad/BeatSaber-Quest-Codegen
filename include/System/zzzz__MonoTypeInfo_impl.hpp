#pragma once
#include "System/zzzz__MonoTypeInfo_def.hpp"
#include "System/Reflection/zzzz__RuntimeConstructorInfo_def.hpp"
//  Writing Method size for method: System::MonoTypeInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::MonoTypeInfo::*)()>(&System::MonoTypeInfo::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2487e30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::MonoTypeInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::MonoTypeInfo::__set_full_name(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::MonoTypeInfo::__get_full_name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::MonoTypeInfo::__set_default_ctor(System::Reflection::RuntimeConstructorInfo value)  {
::cordl_internals::setInstanceField<System::Reflection::RuntimeConstructorInfo, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Reflection::RuntimeConstructorInfo>(value));
}
constexpr System::Reflection::RuntimeConstructorInfo System::MonoTypeInfo::__get_default_ctor() const {
return ::cordl_internals::getInstanceField<System::Reflection::RuntimeConstructorInfo, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::MonoTypeInfo System::MonoTypeInfo::New_ctor()  {
System::MonoTypeInfo o{THROW_UNLESS(::il2cpp_utils::New<System::MonoTypeInfo>())};
return o;
}
 void System::MonoTypeInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::MonoTypeInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
