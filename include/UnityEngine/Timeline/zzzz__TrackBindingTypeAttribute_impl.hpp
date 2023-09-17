#pragma once
#include "System/zzzz__Attribute_impl.hpp"
namespace {
#include "UnityEngine/Timeline/zzzz__TrackBindingTypeAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Timeline/zzzz__TrackBindingFlags_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::TrackBindingTypeAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackBindingTypeAttribute::*)(::System::Type)>(&::UnityEngine::Timeline::TrackBindingTypeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2ad5d4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackBindingTypeAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackBindingTypeAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackBindingTypeAttribute::*)(::System::Type, ::UnityEngine::Timeline::TrackBindingFlags)>(&::UnityEngine::Timeline::TrackBindingTypeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2ad5d7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackBindingTypeAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TrackBindingFlags>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::Timeline::TrackBindingTypeAttribute::__set_type(::System::Type value)  {
::cordl_internals::setInstanceField<::System::Type, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Type>(value));
}
constexpr ::System::Type ::UnityEngine::Timeline::TrackBindingTypeAttribute::__get_type() const {
return ::cordl_internals::getInstanceField<::System::Type, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::Timeline::TrackBindingTypeAttribute::__set_flags(::UnityEngine::Timeline::TrackBindingFlags value)  {
::cordl_internals::setInstanceField<::UnityEngine::Timeline::TrackBindingFlags, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Timeline::TrackBindingFlags>(value));
}
constexpr ::UnityEngine::Timeline::TrackBindingFlags ::UnityEngine::Timeline::TrackBindingTypeAttribute::__get_flags() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Timeline::TrackBindingFlags, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "type", ty: "::System::Type", modifiers: "", def_value: None }]
 ::UnityEngine::Timeline::TrackBindingTypeAttribute::TrackBindingTypeAttribute(::System::Type type)  : ::System::Attribute(THROW_UNLESS(::il2cpp_utils::New<TrackBindingTypeAttribute>(type))) {}
 void ::UnityEngine::Timeline::TrackBindingTypeAttribute::_ctor(::System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackBindingTypeAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, type);
}
// Ctor Parameters [CppParam { name: "type", ty: "::System::Type", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "::UnityEngine::Timeline::TrackBindingFlags", modifiers: "", def_value: None }]
 ::UnityEngine::Timeline::TrackBindingTypeAttribute::TrackBindingTypeAttribute(::System::Type type, ::UnityEngine::Timeline::TrackBindingFlags flags)  : ::System::Attribute(THROW_UNLESS(::il2cpp_utils::New<TrackBindingTypeAttribute>(type, flags))) {}
 void ::UnityEngine::Timeline::TrackBindingTypeAttribute::_ctor(::System::Type type, ::UnityEngine::Timeline::TrackBindingFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackBindingTypeAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TrackBindingFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, type, flags);
}
} // end anonymous namespace
