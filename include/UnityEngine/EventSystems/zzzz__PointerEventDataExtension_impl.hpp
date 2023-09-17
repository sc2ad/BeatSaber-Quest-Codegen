#pragma once
namespace {
#include "UnityEngine/EventSystems/zzzz__PointerEventDataExtension_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventDataExtension.IsVRPointer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::EventSystems::PointerEventData)>(&::UnityEngine::EventSystems::PointerEventDataExtension::IsVRPointer)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x266c02c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PointerEventDataExtension>::get(),
                            "IsVRPointer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventDataExtension.GetRay
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Ray (*)(::UnityEngine::EventSystems::PointerEventData)>(&::UnityEngine::EventSystems::PointerEventDataExtension::GetRay)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x266e5f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PointerEventDataExtension>::get(),
                            "GetRay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventDataExtension.GetSwipeStart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::EventSystems::PointerEventData)>(&::UnityEngine::EventSystems::PointerEventDataExtension::GetSwipeStart)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x266da94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PointerEventDataExtension>::get(),
                            "GetSwipeStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventDataExtension.SetSwipeStart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::EventSystems::PointerEventData, ::UnityEngine::Vector2)>(&::UnityEngine::EventSystems::PointerEventDataExtension::SetSwipeStart)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x266c0a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PointerEventDataExtension>::get(),
                            "SetSwipeStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
 bool ::UnityEngine::EventSystems::PointerEventDataExtension::IsVRPointer(::UnityEngine::EventSystems::PointerEventData pointerEventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PointerEventDataExtension>::get(),
                            "IsVRPointer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, pointerEventData);
}
 ::UnityEngine::Ray ::UnityEngine::EventSystems::PointerEventDataExtension::GetRay(::UnityEngine::EventSystems::PointerEventData pointerEventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PointerEventDataExtension>::get(),
                            "GetRay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Ray, false>(nullptr, ___internal_method, pointerEventData);
}
 ::UnityEngine::Vector2 ::UnityEngine::EventSystems::PointerEventDataExtension::GetSwipeStart(::UnityEngine::EventSystems::PointerEventData pointerEventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PointerEventDataExtension>::get(),
                            "GetSwipeStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method, pointerEventData);
}
 void ::UnityEngine::EventSystems::PointerEventDataExtension::SetSwipeStart(::UnityEngine::EventSystems::PointerEventData pointerEventData, ::UnityEngine::Vector2 start)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PointerEventDataExtension>::get(),
                            "SetSwipeStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, pointerEventData, start);
}
} // end anonymous namespace
