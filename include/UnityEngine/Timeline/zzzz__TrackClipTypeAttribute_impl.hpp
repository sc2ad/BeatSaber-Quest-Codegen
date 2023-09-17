#pragma once
#include "System/zzzz__Attribute_impl.hpp"
namespace {
#include "UnityEngine/Timeline/zzzz__TrackClipTypeAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::TrackClipTypeAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackClipTypeAttribute::*)(::System::Type)>(&::UnityEngine::Timeline::TrackClipTypeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2ad5cec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackClipTypeAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackClipTypeAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackClipTypeAttribute::*)(::System::Type, bool)>(&::UnityEngine::Timeline::TrackClipTypeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2ad5d1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackClipTypeAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::Timeline::TrackClipTypeAttribute::__set_inspectedType(::System::Type value)  {
::cordl_internals::setInstanceField<::System::Type, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Type>(value));
}
constexpr ::System::Type ::UnityEngine::Timeline::TrackClipTypeAttribute::__get_inspectedType() const {
return ::cordl_internals::getInstanceField<::System::Type, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::Timeline::TrackClipTypeAttribute::__set_allowAutoCreate(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::Timeline::TrackClipTypeAttribute::__get_allowAutoCreate() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "clipClass", ty: "::System::Type", modifiers: "", def_value: None }]
 ::UnityEngine::Timeline::TrackClipTypeAttribute::TrackClipTypeAttribute(::System::Type clipClass)  : ::System::Attribute(THROW_UNLESS(::il2cpp_utils::New<TrackClipTypeAttribute>(clipClass))) {}
 void ::UnityEngine::Timeline::TrackClipTypeAttribute::_ctor(::System::Type clipClass)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackClipTypeAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, clipClass);
}
// Ctor Parameters [CppParam { name: "clipClass", ty: "::System::Type", modifiers: "", def_value: None }, CppParam { name: "allowAutoCreate", ty: "bool", modifiers: "", def_value: None }]
 ::UnityEngine::Timeline::TrackClipTypeAttribute::TrackClipTypeAttribute(::System::Type clipClass, bool allowAutoCreate)  : ::System::Attribute(THROW_UNLESS(::il2cpp_utils::New<TrackClipTypeAttribute>(clipClass, allowAutoCreate))) {}
 void ::UnityEngine::Timeline::TrackClipTypeAttribute::_ctor(::System::Type clipClass, bool allowAutoCreate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackClipTypeAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, clipClass, allowAutoCreate);
}
} // end anonymous namespace
