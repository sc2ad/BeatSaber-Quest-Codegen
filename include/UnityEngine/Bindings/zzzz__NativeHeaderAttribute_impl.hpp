#pragma once
#include "System/zzzz__Attribute_impl.hpp"
namespace {
#include "UnityEngine/Bindings/zzzz__NativeHeaderAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Bindings::NativeHeaderAttribute.set_Header
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Bindings::NativeHeaderAttribute::*)(::StringW)>(&::UnityEngine::Bindings::NativeHeaderAttribute::set_Header)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ba10b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::NativeHeaderAttribute>::get(),
                            "set_Header",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bindings::NativeHeaderAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Bindings::NativeHeaderAttribute::*)(::StringW)>(&::UnityEngine::Bindings::NativeHeaderAttribute::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2ba10b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::NativeHeaderAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::Bindings::NativeHeaderAttribute::__set__Header_k__BackingField(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::Bindings::NativeHeaderAttribute::__get__Header_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::UnityEngine::Bindings::NativeHeaderAttribute::set_Header(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::NativeHeaderAttribute>::get(),
                            "set_Header",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "header", ty: "::StringW", modifiers: "", def_value: None }]
 ::UnityEngine::Bindings::NativeHeaderAttribute::NativeHeaderAttribute(::StringW header)  : ::System::Attribute(THROW_UNLESS(::il2cpp_utils::New<NativeHeaderAttribute>(header))) {}
 void ::UnityEngine::Bindings::NativeHeaderAttribute::_ctor(::StringW header)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::NativeHeaderAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, header);
}
} // end anonymous namespace
