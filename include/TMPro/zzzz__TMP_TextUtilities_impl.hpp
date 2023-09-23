#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "TMPro/zzzz__TMP_TextUtilities_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "TMPro/zzzz__CaretPosition_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: TMPro::TMPro__TMP_TextUtilities__LineSegment._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMPro__TMP_TextUtilities__LineSegment::*)(UnityEngine::Vector3, UnityEngine::Vector3)>(&TMPro::TMPro__TMP_TextUtilities__LineSegment::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2ab4494;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMPro__TMP_TextUtilities__LineSegment>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "Point1", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "Point2", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }]
constexpr TMPro::TMPro__TMP_TextUtilities__LineSegment::TMPro__TMP_TextUtilities__LineSegment(UnityEngine::Vector3 Point1, UnityEngine::Vector3 Point2) noexcept : ::bs_hook::ValueTypeWrapper() {this->Point1 = Point1;
this->Point2 = Point2;
}
constexpr void TMPro::TMPro__TMP_TextUtilities__LineSegment::__set_Point1(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x0>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 TMPro::TMPro__TMP_TextUtilities__LineSegment::__get_Point1() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x0>(this->__instance);
}
constexpr void TMPro::TMPro__TMP_TextUtilities__LineSegment::__set_Point2(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0xc>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 TMPro::TMPro__TMP_TextUtilities__LineSegment::__get_Point2() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0xc>(this->__instance);
}
 void TMPro::TMPro__TMP_TextUtilities__LineSegment::_ctor(UnityEngine::Vector3 p1, UnityEngine::Vector3 p2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMPro__TMP_TextUtilities__LineSegment>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, p1, p2);
}
//  Writing Method size for method: TMPro::TMP_TextUtilities.GetCursorIndexFromPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(TMPro::TMP_Text, UnityEngine::Vector3, UnityEngine::Camera)>(&TMPro::TMP_TextUtilities::GetCursorIndexFromPosition)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x2ab170c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_TextUtilities>::get(),
                            "GetCursorIndexFromPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_Text>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Camera>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::TMP_TextUtilities.GetCursorIndexFromPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(TMPro::TMP_Text, UnityEngine::Vector3, UnityEngine::Camera, ByRef<TMPro::CaretPosition>)>(&TMPro::TMP_TextUtilities::GetCursorIndexFromPosition)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x2ab1da8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_TextUtilities>::get(),
                            "GetCursorIndexFromPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_Text>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Camera>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TMPro::CaretPosition>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::TMP_TextUtilities.FindNearestLine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(TMPro::TMP_Text, UnityEngine::Vector3, UnityEngine::Camera)>(&TMPro::TMP_TextUtilities::FindNearestLine)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x2ab1f88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_TextUtilities>::get(),
                            "FindNearestLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_Text>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Camera>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::TMP_TextUtilities.FindNearestCharacterOnLine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(TMPro::TMP_Text, UnityEngine::Vector3, int32_t, UnityEngine::Camera, bool)>(&TMPro::TMP_TextUtilities::FindNearestCharacterOnLine)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x2ab2108;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_TextUtilities>::get(),
                            "FindNearestCharacterOnLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_Text>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Camera>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::TMP_TextUtilities.IsIntersectingRectTransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::RectTransform, UnityEngine::Vector3, UnityEngine::Camera)>(&TMPro::TMP_TextUtilities::IsIntersectingRectTransform)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2ab2608;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_TextUtilities>::get(),
                            "IsIntersectingRectTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RectTransform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Camera>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::TMP_TextUtilities.FindIntersectingCharacter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(TMPro::TMP_Text, UnityEngine::Vector3, UnityEngine::Camera, bool)>(&TMPro::TMP_TextUtilities::FindIntersectingCharacter)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x2ab2724;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_TextUtilities>::get(),
                            "FindIntersectingCharacter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_Text>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Camera>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::TMP_TextUtilities.FindNearestCharacter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(TMPro::TMP_Text, UnityEngine::Vector3, UnityEngine::Camera, bool)>(&TMPro::TMP_TextUtilities::FindNearestCharacter)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x2ab1870;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_TextUtilities>::get(),
                            "FindNearestCharacter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_Text>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Camera>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::TMP_TextUtilities.FindIntersectingWord
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(TMPro::TMP_Text, UnityEngine::Vector3, UnityEngine::Camera)>(&TMPro::TMP_TextUtilities::FindIntersectingWord)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x2ab2930;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_TextUtilities>::get(),
                            "FindIntersectingWord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_Text>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Camera>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::TMP_TextUtilities.FindNearestWord
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(TMPro::TMP_Text, UnityEngine::Vector3, UnityEngine::Camera)>(&TMPro::TMP_TextUtilities::FindNearestWord)> {
  constexpr static std::size_t size = 0x5c8;
  constexpr static std::size_t addrs = 0x2ab2d44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_TextUtilities>::get(),
                            "FindNearestWord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_Text>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Camera>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::TMP_TextUtilities.FindIntersectingLine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(TMPro::TMP_Text, UnityEngine::Vector3, UnityEngine::Camera)>(&TMPro::TMP_TextUtilities::FindIntersectingLine)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2ab330c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_TextUtilities>::get(),
                            "FindIntersectingLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_Text>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Camera>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::TMP_TextUtilities.FindIntersectingLink
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(TMPro::TMP_Text, UnityEngine::Vector3, UnityEngine::Camera)>(&TMPro::TMP_TextUtilities::FindIntersectingLink)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x2ab3464;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_TextUtilities>::get(),
                            "FindIntersectingLink",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_Text>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Camera>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::TMP_TextUtilities.FindNearestLink
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(TMPro::TMP_Text, UnityEngine::Vector3, UnityEngine::Camera)>(&TMPro::TMP_TextUtilities::FindNearestLink)> {
  constexpr static std::size_t size = 0x71c;
  constexpr static std::size_t addrs = 0x2ab37a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_TextUtilities>::get(),
                            "FindNearestLink",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_Text>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Camera>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::TMP_TextUtilities.PointIntersectRectangle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3)>(&TMPro::TMP_TextUtilities::PointIntersectRectangle)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2ab2480;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_TextUtilities>::get(),
                            "PointIntersectRectangle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::TMP_TextUtilities.ScreenPointToWorldPointInRectangle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Transform, UnityEngine::Vector2, UnityEngine::Camera, ByRef<UnityEngine::Vector3>)>(&TMPro::TMP_TextUtilities::ScreenPointToWorldPointInRectangle)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x2ab1bac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_TextUtilities>::get(),
                            "ScreenPointToWorldPointInRectangle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Camera>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::TMP_TextUtilities.IntersectLinePlane
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(TMPro::TMPro__TMP_TextUtilities__LineSegment, UnityEngine::Vector3, UnityEngine::Vector3, ByRef<UnityEngine::Vector3>)>(&TMPro::TMP_TextUtilities::IntersectLinePlane)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x2ab3ebc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_TextUtilities>::get(),
                            "IntersectLinePlane",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMPro__TMP_TextUtilities__LineSegment>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::TMP_TextUtilities.DistanceToLine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3)>(&TMPro::TMP_TextUtilities::DistanceToLine)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2ab2540;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_TextUtilities>::get(),
                            "DistanceToLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::TMP_TextUtilities.ToLowerFast
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (*)(char16_t)>(&TMPro::TMP_TextUtilities::ToLowerFast)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2ab4028;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_TextUtilities>::get(),
                            "ToLowerFast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::TMP_TextUtilities.ToUpperFast
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (*)(char16_t)>(&TMPro::TMP_TextUtilities::ToUpperFast)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2ab409c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_TextUtilities>::get(),
                            "ToUpperFast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::TMP_TextUtilities.ToUpperASCIIFast
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(uint32_t)>(&TMPro::TMP_TextUtilities::ToUpperASCIIFast)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2ab4110;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_TextUtilities>::get(),
                            "ToUpperASCIIFast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::TMP_TextUtilities.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW)>(&TMPro::TMP_TextUtilities::GetHashCode)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2ab4184;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_TextUtilities>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::TMP_TextUtilities.GetSimpleHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW)>(&TMPro::TMP_TextUtilities::GetSimpleHashCode)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2aabfe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_TextUtilities>::get(),
                            "GetSimpleHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::TMP_TextUtilities.GetSimpleHashCodeLowercase
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::StringW)>(&TMPro::TMP_TextUtilities::GetSimpleHashCodeLowercase)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2ab4240;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_TextUtilities>::get(),
                            "GetSimpleHashCodeLowercase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::TMP_TextUtilities.HexToInt
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(char16_t)>(&TMPro::TMP_TextUtilities::HexToInt)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2ab42fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_TextUtilities>::get(),
                            "HexToInt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::TMP_TextUtilities.StringHexToInt
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW)>(&TMPro::TMP_TextUtilities::StringHexToInt)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2ab4328;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_TextUtilities>::get(),
                            "StringHexToInt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
 void TMPro::TMP_TextUtilities::__set_m_rectWorldCorners(::ArrayW<UnityEngine::Vector3> value)  {
::cordl_internals::setStaticField<::ArrayW<UnityEngine::Vector3>, "m_rectWorldCorners", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_TextUtilities>::get>(std::forward<::ArrayW<UnityEngine::Vector3>>(value));
}
 ::ArrayW<UnityEngine::Vector3> TMPro::TMP_TextUtilities::__get_m_rectWorldCorners()  {
return ::cordl_internals::getStaticField<::ArrayW<UnityEngine::Vector3>, "m_rectWorldCorners", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_TextUtilities>::get>();
}
 int32_t TMPro::TMP_TextUtilities::GetCursorIndexFromPosition(TMPro::TMP_Text textComponent, UnityEngine::Vector3 position, UnityEngine::Camera camera)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_TextUtilities>::get(),
                            "GetCursorIndexFromPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_Text>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Camera>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, textComponent, position, camera);
}
 int32_t TMPro::TMP_TextUtilities::GetCursorIndexFromPosition(TMPro::TMP_Text textComponent, UnityEngine::Vector3 position, UnityEngine::Camera camera, ByRef<TMPro::CaretPosition> cursor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_TextUtilities>::get(),
                            "GetCursorIndexFromPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_Text>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Camera>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TMPro::CaretPosition>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, textComponent, position, camera, cursor);
}
 int32_t TMPro::TMP_TextUtilities::FindNearestLine(TMPro::TMP_Text text, UnityEngine::Vector3 position, UnityEngine::Camera camera)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_TextUtilities>::get(),
                            "FindNearestLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_Text>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Camera>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, text, position, camera);
}
 int32_t TMPro::TMP_TextUtilities::FindNearestCharacterOnLine(TMPro::TMP_Text text, UnityEngine::Vector3 position, int32_t line, UnityEngine::Camera camera, bool visibleOnly)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_TextUtilities>::get(),
                            "FindNearestCharacterOnLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_Text>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Camera>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, text, position, line, camera, visibleOnly);
}
 bool TMPro::TMP_TextUtilities::IsIntersectingRectTransform(UnityEngine::RectTransform rectTransform, UnityEngine::Vector3 position, UnityEngine::Camera camera)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_TextUtilities>::get(),
                            "IsIntersectingRectTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RectTransform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Camera>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, rectTransform, position, camera);
}
 int32_t TMPro::TMP_TextUtilities::FindIntersectingCharacter(TMPro::TMP_Text text, UnityEngine::Vector3 position, UnityEngine::Camera camera, bool visibleOnly)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_TextUtilities>::get(),
                            "FindIntersectingCharacter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_Text>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Camera>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, text, position, camera, visibleOnly);
}
 int32_t TMPro::TMP_TextUtilities::FindNearestCharacter(TMPro::TMP_Text text, UnityEngine::Vector3 position, UnityEngine::Camera camera, bool visibleOnly)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_TextUtilities>::get(),
                            "FindNearestCharacter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_Text>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Camera>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, text, position, camera, visibleOnly);
}
 int32_t TMPro::TMP_TextUtilities::FindIntersectingWord(TMPro::TMP_Text text, UnityEngine::Vector3 position, UnityEngine::Camera camera)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_TextUtilities>::get(),
                            "FindIntersectingWord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_Text>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Camera>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, text, position, camera);
}
 int32_t TMPro::TMP_TextUtilities::FindNearestWord(TMPro::TMP_Text text, UnityEngine::Vector3 position, UnityEngine::Camera camera)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_TextUtilities>::get(),
                            "FindNearestWord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_Text>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Camera>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, text, position, camera);
}
 int32_t TMPro::TMP_TextUtilities::FindIntersectingLine(TMPro::TMP_Text text, UnityEngine::Vector3 position, UnityEngine::Camera camera)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_TextUtilities>::get(),
                            "FindIntersectingLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_Text>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Camera>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, text, position, camera);
}
 int32_t TMPro::TMP_TextUtilities::FindIntersectingLink(TMPro::TMP_Text text, UnityEngine::Vector3 position, UnityEngine::Camera camera)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_TextUtilities>::get(),
                            "FindIntersectingLink",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_Text>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Camera>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, text, position, camera);
}
 int32_t TMPro::TMP_TextUtilities::FindNearestLink(TMPro::TMP_Text text, UnityEngine::Vector3 position, UnityEngine::Camera camera)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_TextUtilities>::get(),
                            "FindNearestLink",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_Text>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Camera>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, text, position, camera);
}
 bool TMPro::TMP_TextUtilities::PointIntersectRectangle(UnityEngine::Vector3 m, UnityEngine::Vector3 a, UnityEngine::Vector3 b, UnityEngine::Vector3 c, UnityEngine::Vector3 d)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_TextUtilities>::get(),
                            "PointIntersectRectangle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, m, a, b, c, d);
}
 bool TMPro::TMP_TextUtilities::ScreenPointToWorldPointInRectangle(UnityEngine::Transform transform, UnityEngine::Vector2 screenPoint, UnityEngine::Camera cam, ByRef<UnityEngine::Vector3> worldPoint)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_TextUtilities>::get(),
                            "ScreenPointToWorldPointInRectangle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Camera>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, transform, screenPoint, cam, worldPoint);
}
 bool TMPro::TMP_TextUtilities::IntersectLinePlane(TMPro::TMPro__TMP_TextUtilities__LineSegment line, UnityEngine::Vector3 point, UnityEngine::Vector3 normal, ByRef<UnityEngine::Vector3> intersectingPoint)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_TextUtilities>::get(),
                            "IntersectLinePlane",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMPro__TMP_TextUtilities__LineSegment>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, line, point, normal, intersectingPoint);
}
 float_t TMPro::TMP_TextUtilities::DistanceToLine(UnityEngine::Vector3 a, UnityEngine::Vector3 b, UnityEngine::Vector3 point)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_TextUtilities>::get(),
                            "DistanceToLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, a, b, point);
}
 char16_t TMPro::TMP_TextUtilities::ToLowerFast(char16_t c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_TextUtilities>::get(),
                            "ToLowerFast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(nullptr, ___internal_method, c);
}
 char16_t TMPro::TMP_TextUtilities::ToUpperFast(char16_t c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_TextUtilities>::get(),
                            "ToUpperFast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(nullptr, ___internal_method, c);
}
 uint32_t TMPro::TMP_TextUtilities::ToUpperASCIIFast(uint32_t c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_TextUtilities>::get(),
                            "ToUpperASCIIFast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, c);
}
 int32_t TMPro::TMP_TextUtilities::GetHashCode(::StringW s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_TextUtilities>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, s);
}
 int32_t TMPro::TMP_TextUtilities::GetSimpleHashCode(::StringW s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_TextUtilities>::get(),
                            "GetSimpleHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, s);
}
 uint32_t TMPro::TMP_TextUtilities::GetSimpleHashCodeLowercase(::StringW s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_TextUtilities>::get(),
                            "GetSimpleHashCodeLowercase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, s);
}
 int32_t TMPro::TMP_TextUtilities::HexToInt(char16_t hex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_TextUtilities>::get(),
                            "HexToInt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, hex);
}
 int32_t TMPro::TMP_TextUtilities::StringHexToInt(::StringW s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_TextUtilities>::get(),
                            "StringHexToInt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, s);
}
