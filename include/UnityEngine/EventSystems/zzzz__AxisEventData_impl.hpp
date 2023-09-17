#pragma once
#include "UnityEngine/EventSystems/zzzz__BaseEventData_impl.hpp"
namespace {
#include "UnityEngine/EventSystems/zzzz__AxisEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__EventSystem_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/EventSystems/zzzz__MoveDirection_def.hpp"
//  Writing Method size for method: ::UnityEngine::EventSystems::AxisEventData.get_moveVector
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::EventSystems::AxisEventData::*)()>(&::UnityEngine::EventSystems::AxisEventData::get_moveVector)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1c1b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::AxisEventData>::get(),
                            "get_moveVector",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::AxisEventData.set_moveVector
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::AxisEventData::*)(::UnityEngine::Vector2)>(&::UnityEngine::EventSystems::AxisEventData::set_moveVector)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1c1c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::AxisEventData>::get(),
                            "set_moveVector",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::AxisEventData.get_moveDir
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventSystems::MoveDirection (::UnityEngine::EventSystems::AxisEventData::*)()>(&::UnityEngine::EventSystems::AxisEventData::get_moveDir)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1c1c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::AxisEventData>::get(),
                            "get_moveDir",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::AxisEventData.set_moveDir
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::AxisEventData::*)(::UnityEngine::EventSystems::MoveDirection)>(&::UnityEngine::EventSystems::AxisEventData::set_moveDir)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1c1d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::AxisEventData>::get(),
                            "set_moveDir",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::MoveDirection>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::AxisEventData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::AxisEventData::*)(::UnityEngine::EventSystems::EventSystem)>(&::UnityEngine::EventSystems::AxisEventData::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2c1c1d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::AxisEventData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::EventSystem>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::EventSystems::AxisEventData::__set__moveVector_k__BackingField(::UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2 ::UnityEngine::EventSystems::AxisEventData::__get__moveVector_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::EventSystems::AxisEventData::__set__moveDir_k__BackingField(::UnityEngine::EventSystems::MoveDirection value)  {
::cordl_internals::setInstanceField<::UnityEngine::EventSystems::MoveDirection, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::EventSystems::MoveDirection>(value));
}
constexpr ::UnityEngine::EventSystems::MoveDirection ::UnityEngine::EventSystems::AxisEventData::__get__moveDir_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::EventSystems::MoveDirection, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::UnityEngine::Vector2 ::UnityEngine::EventSystems::AxisEventData::get_moveVector()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::AxisEventData>::get(),
                            "get_moveVector",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::EventSystems::AxisEventData::set_moveVector(::UnityEngine::Vector2 value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::AxisEventData>::get(),
                            "set_moveVector",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::EventSystems::MoveDirection ::UnityEngine::EventSystems::AxisEventData::get_moveDir()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::AxisEventData>::get(),
                            "get_moveDir",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::MoveDirection, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::EventSystems::AxisEventData::set_moveDir(::UnityEngine::EventSystems::MoveDirection value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::AxisEventData>::get(),
                            "set_moveDir",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::MoveDirection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "eventSystem", ty: "::UnityEngine::EventSystems::EventSystem", modifiers: "", def_value: None }]
 ::UnityEngine::EventSystems::AxisEventData::AxisEventData(::UnityEngine::EventSystems::EventSystem eventSystem)  : ::UnityEngine::EventSystems::BaseEventData(THROW_UNLESS(::il2cpp_utils::New<AxisEventData>(eventSystem))) {}
 void ::UnityEngine::EventSystems::AxisEventData::_ctor(::UnityEngine::EventSystems::EventSystem eventSystem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::AxisEventData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::EventSystem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventSystem);
}
} // end anonymous namespace
