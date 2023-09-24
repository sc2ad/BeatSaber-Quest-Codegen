#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__AutoUnwrapSettings_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__AutoUnwrapSettings_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor  UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor::UpperLeft{0};
constexpr UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor  UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor::UpperCenter{1};
constexpr UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor  UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor::UpperRight{2};
constexpr UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor  UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor::MiddleLeft{3};
constexpr UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor  UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor::MiddleCenter{4};
constexpr UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor  UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor::MiddleRight{5};
constexpr UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor  UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor::LowerLeft{6};
constexpr UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor  UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor::LowerCenter{7};
constexpr UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor  UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor::LowerRight{8};
constexpr UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor  UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor::None{9};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Fill::UnityEngine__ProBuilder__AutoUnwrapSettings__Fill(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Fill::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Fill::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Fill  UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Fill::Fit{0};
constexpr UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Fill  UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Fill::Tile{1};
constexpr UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Fill  UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Fill::Stretch{2};
//  Writing Method size for method: UnityEngine::ProBuilder::AutoUnwrapSettings.get_defaultAutoUnwrapSettings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::AutoUnwrapSettings (*)()>(&UnityEngine::ProBuilder::AutoUnwrapSettings::get_defaultAutoUnwrapSettings)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x29a3240;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                            "get_defaultAutoUnwrapSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::AutoUnwrapSettings.get_useWorldSpace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::AutoUnwrapSettings::*)()>(&UnityEngine::ProBuilder::AutoUnwrapSettings::get_useWorldSpace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29a3270;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                            "get_useWorldSpace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::AutoUnwrapSettings.set_useWorldSpace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::AutoUnwrapSettings::*)(bool)>(&UnityEngine::ProBuilder::AutoUnwrapSettings::set_useWorldSpace)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29a3278;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                            "set_useWorldSpace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::AutoUnwrapSettings.get_flipU
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::AutoUnwrapSettings::*)()>(&UnityEngine::ProBuilder::AutoUnwrapSettings::get_flipU)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29a3284;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                            "get_flipU",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::AutoUnwrapSettings.set_flipU
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::AutoUnwrapSettings::*)(bool)>(&UnityEngine::ProBuilder::AutoUnwrapSettings::set_flipU)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29a328c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                            "set_flipU",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::AutoUnwrapSettings.get_flipV
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::AutoUnwrapSettings::*)()>(&UnityEngine::ProBuilder::AutoUnwrapSettings::get_flipV)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29a3298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                            "get_flipV",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::AutoUnwrapSettings.set_flipV
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::AutoUnwrapSettings::*)(bool)>(&UnityEngine::ProBuilder::AutoUnwrapSettings::set_flipV)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29a32a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                            "set_flipV",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::AutoUnwrapSettings.get_swapUV
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::AutoUnwrapSettings::*)()>(&UnityEngine::ProBuilder::AutoUnwrapSettings::get_swapUV)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29a32ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                            "get_swapUV",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::AutoUnwrapSettings.set_swapUV
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::AutoUnwrapSettings::*)(bool)>(&UnityEngine::ProBuilder::AutoUnwrapSettings::set_swapUV)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29a32b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                            "set_swapUV",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::AutoUnwrapSettings.get_fill
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Fill (UnityEngine::ProBuilder::AutoUnwrapSettings::*)()>(&UnityEngine::ProBuilder::AutoUnwrapSettings::get_fill)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29a32c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                            "get_fill",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::AutoUnwrapSettings.set_fill
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::AutoUnwrapSettings::*)(UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Fill)>(&UnityEngine::ProBuilder::AutoUnwrapSettings::set_fill)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29a32c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                            "set_fill",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Fill>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::AutoUnwrapSettings.get_scale
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (UnityEngine::ProBuilder::AutoUnwrapSettings::*)()>(&UnityEngine::ProBuilder::AutoUnwrapSettings::get_scale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29a32d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                            "get_scale",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::AutoUnwrapSettings.set_scale
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::AutoUnwrapSettings::*)(UnityEngine::Vector2)>(&UnityEngine::ProBuilder::AutoUnwrapSettings::set_scale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29a32d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                            "set_scale",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::AutoUnwrapSettings.get_offset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (UnityEngine::ProBuilder::AutoUnwrapSettings::*)()>(&UnityEngine::ProBuilder::AutoUnwrapSettings::get_offset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29a32e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                            "get_offset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::AutoUnwrapSettings.set_offset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::AutoUnwrapSettings::*)(UnityEngine::Vector2)>(&UnityEngine::ProBuilder::AutoUnwrapSettings::set_offset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29a32e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                            "set_offset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::AutoUnwrapSettings.get_rotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::ProBuilder::AutoUnwrapSettings::*)()>(&UnityEngine::ProBuilder::AutoUnwrapSettings::get_rotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29a32f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                            "get_rotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::AutoUnwrapSettings.set_rotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::AutoUnwrapSettings::*)(float_t)>(&UnityEngine::ProBuilder::AutoUnwrapSettings::set_rotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29a32f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                            "set_rotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::AutoUnwrapSettings.get_anchor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor (UnityEngine::ProBuilder::AutoUnwrapSettings::*)()>(&UnityEngine::ProBuilder::AutoUnwrapSettings::get_anchor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29a3300;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                            "get_anchor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::AutoUnwrapSettings.set_anchor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::AutoUnwrapSettings::*)(UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor)>(&UnityEngine::ProBuilder::AutoUnwrapSettings::set_anchor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29a3308;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                            "set_anchor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::AutoUnwrapSettings._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::AutoUnwrapSettings::*)(UnityEngine::ProBuilder::AutoUnwrapSettings)>(&UnityEngine::ProBuilder::AutoUnwrapSettings::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x29a3310;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::AutoUnwrapSettings>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::AutoUnwrapSettings.get_tile
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::AutoUnwrapSettings (*)()>(&UnityEngine::ProBuilder::AutoUnwrapSettings::get_tile)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x29a336c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                            "get_tile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::AutoUnwrapSettings.get_fit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::AutoUnwrapSettings (*)()>(&UnityEngine::ProBuilder::AutoUnwrapSettings::get_fit)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x29a3384;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                            "get_fit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::AutoUnwrapSettings.get_stretch
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::AutoUnwrapSettings (*)()>(&UnityEngine::ProBuilder::AutoUnwrapSettings::get_stretch)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x29a339c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                            "get_stretch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::AutoUnwrapSettings.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::AutoUnwrapSettings::*)()>(&UnityEngine::ProBuilder::AutoUnwrapSettings::Reset)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x29a3258;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::AutoUnwrapSettings.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ProBuilder::AutoUnwrapSettings::*)()>(&UnityEngine::ProBuilder::AutoUnwrapSettings::ToString)> {
  constexpr static std::size_t size = 0x54c;
  constexpr static std::size_t addrs = 0x29a33b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ProBuilder::AutoUnwrapSettings),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "m_UseWorldSpace", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_FlipU", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_FlipV", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SwapUV", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Fill", ty: "UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Fill", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Scale", ty: "UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Offset", ty: "UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Rotation", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Anchor", ty: "UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::ProBuilder::AutoUnwrapSettings::AutoUnwrapSettings(bool m_UseWorldSpace, bool m_FlipU, bool m_FlipV, bool m_SwapUV, UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Fill m_Fill, UnityEngine::Vector2 m_Scale, UnityEngine::Vector2 m_Offset, float_t m_Rotation, UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor m_Anchor) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_UseWorldSpace = m_UseWorldSpace;
this->m_FlipU = m_FlipU;
this->m_FlipV = m_FlipV;
this->m_SwapUV = m_SwapUV;
this->m_Fill = m_Fill;
this->m_Scale = m_Scale;
this->m_Offset = m_Offset;
this->m_Rotation = m_Rotation;
this->m_Anchor = m_Anchor;
}
constexpr void UnityEngine::ProBuilder::AutoUnwrapSettings::__set_m_UseWorldSpace(bool value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::ProBuilder::AutoUnwrapSettings::__get_m_UseWorldSpace() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->__instance);
}
constexpr void UnityEngine::ProBuilder::AutoUnwrapSettings::__set_m_FlipU(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::ProBuilder::AutoUnwrapSettings::__get_m_FlipU() const {
return ::cordl_internals::getInstanceField<bool, 0x1>(this->__instance);
}
constexpr void UnityEngine::ProBuilder::AutoUnwrapSettings::__set_m_FlipV(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::ProBuilder::AutoUnwrapSettings::__get_m_FlipV() const {
return ::cordl_internals::getInstanceField<bool, 0x2>(this->__instance);
}
constexpr void UnityEngine::ProBuilder::AutoUnwrapSettings::__set_m_SwapUV(bool value)  {
::cordl_internals::setInstanceField<bool, 0x3>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::ProBuilder::AutoUnwrapSettings::__get_m_SwapUV() const {
return ::cordl_internals::getInstanceField<bool, 0x3>(this->__instance);
}
constexpr void UnityEngine::ProBuilder::AutoUnwrapSettings::__set_m_Fill(UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Fill value)  {
::cordl_internals::setInstanceField<UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Fill, 0x4>(this->__instance, std::forward<UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Fill>(value));
}
constexpr UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Fill UnityEngine::ProBuilder::AutoUnwrapSettings::__get_m_Fill() const {
return ::cordl_internals::getInstanceField<UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Fill, 0x4>(this->__instance);
}
constexpr void UnityEngine::ProBuilder::AutoUnwrapSettings::__set_m_Scale(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x8>(this->__instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 UnityEngine::ProBuilder::AutoUnwrapSettings::__get_m_Scale() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x8>(this->__instance);
}
constexpr void UnityEngine::ProBuilder::AutoUnwrapSettings::__set_m_Offset(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x10>(this->__instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 UnityEngine::ProBuilder::AutoUnwrapSettings::__get_m_Offset() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x10>(this->__instance);
}
constexpr void UnityEngine::ProBuilder::AutoUnwrapSettings::__set_m_Rotation(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::ProBuilder::AutoUnwrapSettings::__get_m_Rotation() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->__instance);
}
constexpr void UnityEngine::ProBuilder::AutoUnwrapSettings::__set_m_Anchor(UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor value)  {
::cordl_internals::setInstanceField<UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor, 0x1c>(this->__instance, std::forward<UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor>(value));
}
constexpr UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor UnityEngine::ProBuilder::AutoUnwrapSettings::__get_m_Anchor() const {
return ::cordl_internals::getInstanceField<UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor, 0x1c>(this->__instance);
}
 UnityEngine::ProBuilder::AutoUnwrapSettings UnityEngine::ProBuilder::AutoUnwrapSettings::get_defaultAutoUnwrapSettings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                            "get_defaultAutoUnwrapSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ProBuilder::AutoUnwrapSettings, false>(nullptr, ___internal_method);
}
 bool UnityEngine::ProBuilder::AutoUnwrapSettings::get_useWorldSpace()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                            "get_useWorldSpace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::ProBuilder::AutoUnwrapSettings::set_useWorldSpace(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                            "set_useWorldSpace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 bool UnityEngine::ProBuilder::AutoUnwrapSettings::get_flipU()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                            "get_flipU",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::ProBuilder::AutoUnwrapSettings::set_flipU(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                            "set_flipU",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 bool UnityEngine::ProBuilder::AutoUnwrapSettings::get_flipV()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                            "get_flipV",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::ProBuilder::AutoUnwrapSettings::set_flipV(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                            "set_flipV",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 bool UnityEngine::ProBuilder::AutoUnwrapSettings::get_swapUV()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                            "get_swapUV",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::ProBuilder::AutoUnwrapSettings::set_swapUV(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                            "set_swapUV",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Fill UnityEngine::ProBuilder::AutoUnwrapSettings::get_fill()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                            "get_fill",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Fill, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::ProBuilder::AutoUnwrapSettings::set_fill(UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Fill value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                            "set_fill",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Fill>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 UnityEngine::Vector2 UnityEngine::ProBuilder::AutoUnwrapSettings::get_scale()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                            "get_scale",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector2, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::ProBuilder::AutoUnwrapSettings::set_scale(UnityEngine::Vector2 value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                            "set_scale",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 UnityEngine::Vector2 UnityEngine::ProBuilder::AutoUnwrapSettings::get_offset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                            "get_offset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector2, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::ProBuilder::AutoUnwrapSettings::set_offset(UnityEngine::Vector2 value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                            "set_offset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 float_t UnityEngine::ProBuilder::AutoUnwrapSettings::get_rotation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                            "get_rotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::ProBuilder::AutoUnwrapSettings::set_rotation(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                            "set_rotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor UnityEngine::ProBuilder::AutoUnwrapSettings::get_anchor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                            "get_anchor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::ProBuilder::AutoUnwrapSettings::set_anchor(UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                            "set_anchor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 void UnityEngine::ProBuilder::AutoUnwrapSettings::_ctor(UnityEngine::ProBuilder::AutoUnwrapSettings unwrapSettings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::AutoUnwrapSettings>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, unwrapSettings);
}
 UnityEngine::ProBuilder::AutoUnwrapSettings UnityEngine::ProBuilder::AutoUnwrapSettings::get_tile()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                            "get_tile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ProBuilder::AutoUnwrapSettings, false>(nullptr, ___internal_method);
}
 UnityEngine::ProBuilder::AutoUnwrapSettings UnityEngine::ProBuilder::AutoUnwrapSettings::get_fit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                            "get_fit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ProBuilder::AutoUnwrapSettings, false>(nullptr, ___internal_method);
}
 UnityEngine::ProBuilder::AutoUnwrapSettings UnityEngine::ProBuilder::AutoUnwrapSettings::get_stretch()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                            "get_stretch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ProBuilder::AutoUnwrapSettings, false>(nullptr, ___internal_method);
}
 void UnityEngine::ProBuilder::AutoUnwrapSettings::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW UnityEngine::ProBuilder::AutoUnwrapSettings::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
