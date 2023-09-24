#pragma once
#include "UnityEngine/UIElements/zzzz__RepaintData_def.hpp"
#include "UnityEngine/zzzz__Event_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::RepaintData.get_currentOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Matrix4x4 (UnityEngine::UIElements::RepaintData::*)()>(&UnityEngine::UIElements::RepaintData::get_currentOffset)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2c4fbbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::RepaintData>::get(),
                            "get_currentOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::RepaintData.get_currentWorldClip
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rect (UnityEngine::UIElements::RepaintData::*)()>(&UnityEngine::UIElements::RepaintData::get_currentWorldClip)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c4fbd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::RepaintData>::get(),
                            "get_currentWorldClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::RepaintData.get_repaintEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Event (UnityEngine::UIElements::RepaintData::*)()>(&UnityEngine::UIElements::RepaintData::get_repaintEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c4fbdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::RepaintData>::get(),
                            "get_repaintEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::RepaintData.set_repaintEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::RepaintData::*)(UnityEngine::Event)>(&UnityEngine::UIElements::RepaintData::set_repaintEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c4fbe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::RepaintData>::get(),
                            "set_repaintEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Event>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::RepaintData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::RepaintData::*)()>(&UnityEngine::UIElements::RepaintData::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2c4fbec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::RepaintData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UIElements::RepaintData::__set__currentOffset_k__BackingField(UnityEngine::Matrix4x4 value)  {
::cordl_internals::setInstanceField<UnityEngine::Matrix4x4, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Matrix4x4>(value));
}
constexpr UnityEngine::Matrix4x4 UnityEngine::UIElements::RepaintData::__get__currentOffset_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::Matrix4x4, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::RepaintData::__set__mousePosition_k__BackingField(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 UnityEngine::UIElements::RepaintData::__get__mousePosition_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::RepaintData::__set__currentWorldClip_k__BackingField(UnityEngine::Rect value)  {
::cordl_internals::setInstanceField<UnityEngine::Rect, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Rect>(value));
}
constexpr UnityEngine::Rect UnityEngine::UIElements::RepaintData::__get__currentWorldClip_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::Rect, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::RepaintData::__set__repaintEvent_k__BackingField(UnityEngine::Event value)  {
::cordl_internals::setInstanceField<UnityEngine::Event, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Event>(value));
}
constexpr UnityEngine::Event UnityEngine::UIElements::RepaintData::__get__repaintEvent_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::Event, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::Matrix4x4 UnityEngine::UIElements::RepaintData::get_currentOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::RepaintData>::get(),
                            "get_currentOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Matrix4x4, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Rect UnityEngine::UIElements::RepaintData::get_currentWorldClip()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::RepaintData>::get(),
                            "get_currentWorldClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Rect, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Event UnityEngine::UIElements::RepaintData::get_repaintEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::RepaintData>::get(),
                            "get_repaintEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Event, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::RepaintData::set_repaintEvent(UnityEngine::Event value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::RepaintData>::get(),
                            "set_repaintEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Event>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::UIElements::RepaintData UnityEngine::UIElements::RepaintData::New_ctor()  {
UnityEngine::UIElements::RepaintData o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::UIElements::RepaintData>())};
return o;
}
 void UnityEngine::UIElements::RepaintData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::RepaintData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
