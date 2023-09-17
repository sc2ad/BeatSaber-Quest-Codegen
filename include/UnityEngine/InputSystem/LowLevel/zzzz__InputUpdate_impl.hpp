#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdate_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdateType_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount.get_value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount::*)()>(&::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount::get_value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x295e5a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount.set_value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount::*)(uint32_t)>(&::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount::set_value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x295e5b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount>::get(),
                            "set_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount.OnBeforeUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount::*)()>(&::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount::OnBeforeUpdate)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x295e3c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount>::get(),
                            "OnBeforeUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount.OnUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount::*)()>(&::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount::OnUpdate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x295e468;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount>::get(),
                            "OnUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "m_WasUpdated", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_value_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount::____UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount(bool m_WasUpdated, uint32_t _value_k__BackingField) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_WasUpdated = m_WasUpdated;
this->_value_k__BackingField = _value_k__BackingField;
}
constexpr void ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount::__set_m_WasUpdated(bool value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount::__get_m_WasUpdated() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount::__set__value_k__BackingField(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x4>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount::__get__value_k__BackingField() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x4>(this->__instance);
}
 uint32_t ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount::get_value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount::set_value(uint32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount>::get(),
                            "set_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 void ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount::OnBeforeUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount>::get(),
                            "OnBeforeUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount::OnUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount>::get(),
                            "OnUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "lastUpdateType", ty: "::UnityEngine::InputSystem::LowLevel::InputUpdateType", modifiers: "", def_value: Some("{}") }, CppParam { name: "playerUpdateStepCount", ty: "::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputUpdate__SerializedState::____UnityEngine__InputSystem__LowLevel__InputUpdate__SerializedState(::UnityEngine::InputSystem::LowLevel::InputUpdateType lastUpdateType, ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount playerUpdateStepCount) noexcept : ::bs_hook::ValueTypeWrapper() {this->lastUpdateType = lastUpdateType;
this->playerUpdateStepCount = playerUpdateStepCount;
}
constexpr void ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputUpdate__SerializedState::__set_lastUpdateType(::UnityEngine::InputSystem::LowLevel::InputUpdateType value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::LowLevel::InputUpdateType, 0x0>(this->__instance, std::forward<::UnityEngine::InputSystem::LowLevel::InputUpdateType>(value));
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateType ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputUpdate__SerializedState::__get_lastUpdateType() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::LowLevel::InputUpdateType, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputUpdate__SerializedState::__set_playerUpdateStepCount(::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount, 0x4>(this->__instance, std::forward<::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount>(value));
}
constexpr ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputUpdate__SerializedState::__get_playerUpdateStepCount() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount, 0x4>(this->__instance);
}
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputUpdate.OnBeforeUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::LowLevel::InputUpdateType)>(&::UnityEngine::InputSystem::LowLevel::InputUpdate::OnBeforeUpdate)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x295e348;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputUpdate>::get(),
                            "OnBeforeUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputUpdateType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputUpdate.OnUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::LowLevel::InputUpdateType)>(&::UnityEngine::InputSystem::LowLevel::InputUpdate::OnUpdate)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x295e3e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputUpdate>::get(),
                            "OnUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputUpdateType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputUpdate.Save
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputUpdate__SerializedState (*)()>(&::UnityEngine::InputSystem::LowLevel::InputUpdate::Save)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x295e484;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputUpdate>::get(),
                            "Save",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputUpdate.Restore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputUpdate__SerializedState)>(&::UnityEngine::InputSystem::LowLevel::InputUpdate::Restore)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x295e4e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputUpdate>::get(),
                            "Restore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputUpdate__SerializedState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputUpdate.GetUpdateTypeForPlayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::InputUpdateType (*)(::UnityEngine::InputSystem::LowLevel::InputUpdateType)>(&::UnityEngine::InputSystem::LowLevel::InputUpdate::GetUpdateTypeForPlayer)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x295e57c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputUpdate>::get(),
                            "GetUpdateTypeForPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputUpdateType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputUpdate.IsPlayerUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::InputSystem::LowLevel::InputUpdateType)>(&::UnityEngine::InputSystem::LowLevel::InputUpdate::IsPlayerUpdate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x295e59c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputUpdate>::get(),
                            "IsPlayerUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputUpdateType>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::UnityEngine::InputSystem::LowLevel::InputUpdate::__set_s_UpdateStepCount(uint32_t value)  {
::cordl_internals::setStaticField<uint32_t, "s_UpdateStepCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputUpdate>::get>(std::forward<uint32_t>(value));
}
 uint32_t ::UnityEngine::InputSystem::LowLevel::InputUpdate::__get_s_UpdateStepCount()  {
return ::cordl_internals::getStaticField<uint32_t, "s_UpdateStepCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputUpdate>::get>();
}
 void ::UnityEngine::InputSystem::LowLevel::InputUpdate::__set_s_LatestUpdateType(::UnityEngine::InputSystem::LowLevel::InputUpdateType value)  {
::cordl_internals::setStaticField<::UnityEngine::InputSystem::LowLevel::InputUpdateType, "s_LatestUpdateType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputUpdate>::get>(std::forward<::UnityEngine::InputSystem::LowLevel::InputUpdateType>(value));
}
 ::UnityEngine::InputSystem::LowLevel::InputUpdateType ::UnityEngine::InputSystem::LowLevel::InputUpdate::__get_s_LatestUpdateType()  {
return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::LowLevel::InputUpdateType, "s_LatestUpdateType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputUpdate>::get>();
}
 void ::UnityEngine::InputSystem::LowLevel::InputUpdate::__set_s_PlayerUpdateStepCount(::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount value)  {
::cordl_internals::setStaticField<::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount, "s_PlayerUpdateStepCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputUpdate>::get>(std::forward<::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount>(value));
}
 ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount ::UnityEngine::InputSystem::LowLevel::InputUpdate::__get_s_PlayerUpdateStepCount()  {
return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount, "s_PlayerUpdateStepCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputUpdate>::get>();
}
 void ::UnityEngine::InputSystem::LowLevel::InputUpdate::OnBeforeUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputUpdate>::get(),
                            "OnBeforeUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputUpdateType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, type);
}
 void ::UnityEngine::InputSystem::LowLevel::InputUpdate::OnUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputUpdate>::get(),
                            "OnUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputUpdateType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, type);
}
 ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputUpdate__SerializedState ::UnityEngine::InputSystem::LowLevel::InputUpdate::Save()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputUpdate>::get(),
                            "Save",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputUpdate__SerializedState, false>(nullptr, ___internal_method);
}
 void ::UnityEngine::InputSystem::LowLevel::InputUpdate::Restore(::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputUpdate__SerializedState state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputUpdate>::get(),
                            "Restore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputUpdate__SerializedState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, state);
}
 ::UnityEngine::InputSystem::LowLevel::InputUpdateType ::UnityEngine::InputSystem::LowLevel::InputUpdate::GetUpdateTypeForPlayer(::UnityEngine::InputSystem::LowLevel::InputUpdateType mask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputUpdate>::get(),
                            "GetUpdateTypeForPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputUpdateType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputUpdateType, false>(nullptr, ___internal_method, mask);
}
 bool ::UnityEngine::InputSystem::LowLevel::InputUpdate::IsPlayerUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputUpdate>::get(),
                            "IsPlayerUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputUpdateType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, updateType);
}
} // end anonymous namespace
