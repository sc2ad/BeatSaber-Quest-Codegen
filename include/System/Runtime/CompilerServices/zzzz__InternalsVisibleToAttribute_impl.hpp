#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__InternalsVisibleToAttribute_def.hpp"
//  Writing Method size for method: System::Runtime::CompilerServices::InternalsVisibleToAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::InternalsVisibleToAttribute::*)(::StringW)>(&System::Runtime::CompilerServices::InternalsVisibleToAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2370a5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::InternalsVisibleToAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::InternalsVisibleToAttribute.set_AllInternalsVisible
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::InternalsVisibleToAttribute::*)(bool)>(&System::Runtime::CompilerServices::InternalsVisibleToAttribute::set_AllInternalsVisible)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2370a8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::InternalsVisibleToAttribute>::get(),
                            "set_AllInternalsVisible",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::CompilerServices::InternalsVisibleToAttribute::__set__assemblyName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Runtime::CompilerServices::InternalsVisibleToAttribute::__get__assemblyName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::CompilerServices::InternalsVisibleToAttribute::__set__allInternalsVisible(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Runtime::CompilerServices::InternalsVisibleToAttribute::__get__allInternalsVisible() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Runtime::CompilerServices::InternalsVisibleToAttribute System::Runtime::CompilerServices::InternalsVisibleToAttribute::New_ctor(::StringW assemblyName)  {
System::Runtime::CompilerServices::InternalsVisibleToAttribute o{THROW_UNLESS(::il2cpp_utils::New<System::Runtime::CompilerServices::InternalsVisibleToAttribute>(assemblyName))};
return o;
}
 void System::Runtime::CompilerServices::InternalsVisibleToAttribute::_ctor(::StringW assemblyName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::InternalsVisibleToAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, assemblyName);
}
 void System::Runtime::CompilerServices::InternalsVisibleToAttribute::set_AllInternalsVisible(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::InternalsVisibleToAttribute>::get(),
                            "set_AllInternalsVisible",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
