#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Resources/zzzz__NeutralResourcesLanguageAttribute_def.hpp"
#include "System/Resources/zzzz__UltimateResourceFallbackLocation_def.hpp"
//  Writing Method size for method: System::Resources::NeutralResourcesLanguageAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Resources::NeutralResourcesLanguageAttribute::*)(::StringW)>(&System::Resources::NeutralResourcesLanguageAttribute::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2370d08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::NeutralResourcesLanguageAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Resources::NeutralResourcesLanguageAttribute.get_CultureName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Resources::NeutralResourcesLanguageAttribute::*)()>(&System::Resources::NeutralResourcesLanguageAttribute::get_CultureName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2370d84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::NeutralResourcesLanguageAttribute>::get(),
                            "get_CultureName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Resources::NeutralResourcesLanguageAttribute.get_Location
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Resources::UltimateResourceFallbackLocation (System::Resources::NeutralResourcesLanguageAttribute::*)()>(&System::Resources::NeutralResourcesLanguageAttribute::get_Location)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2370d8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::NeutralResourcesLanguageAttribute>::get(),
                            "get_Location",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Resources::NeutralResourcesLanguageAttribute::__set__CultureName_k__BackingField(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Resources::NeutralResourcesLanguageAttribute::__get__CultureName_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Resources::NeutralResourcesLanguageAttribute::__set__Location_k__BackingField(System::Resources::UltimateResourceFallbackLocation value)  {
::cordl_internals::setInstanceField<System::Resources::UltimateResourceFallbackLocation, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Resources::UltimateResourceFallbackLocation>(value));
}
constexpr System::Resources::UltimateResourceFallbackLocation System::Resources::NeutralResourcesLanguageAttribute::__get__Location_k__BackingField() const {
return ::cordl_internals::getInstanceField<System::Resources::UltimateResourceFallbackLocation, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Resources::NeutralResourcesLanguageAttribute System::Resources::NeutralResourcesLanguageAttribute::New_ctor(::StringW cultureName)  {
System::Resources::NeutralResourcesLanguageAttribute o{THROW_UNLESS(::il2cpp_utils::New<System::Resources::NeutralResourcesLanguageAttribute>(cultureName))};
return o;
}
 void System::Resources::NeutralResourcesLanguageAttribute::_ctor(::StringW cultureName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::NeutralResourcesLanguageAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cultureName);
}
 ::StringW System::Resources::NeutralResourcesLanguageAttribute::get_CultureName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::NeutralResourcesLanguageAttribute>::get(),
                            "get_CultureName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Resources::UltimateResourceFallbackLocation System::Resources::NeutralResourcesLanguageAttribute::get_Location()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::NeutralResourcesLanguageAttribute>::get(),
                            "get_Location",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Resources::UltimateResourceFallbackLocation, false>(const_cast<void*>(instance), ___internal_method);
}
