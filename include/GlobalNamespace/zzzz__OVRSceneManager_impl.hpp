#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSceneManager_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRScenePlane_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneManager_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "GlobalNamespace/zzzz__OVRCameraRig_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpace_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "GlobalNamespace/zzzz__OVRScenePrefabOverride_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRSceneManager__Classification.get_List
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IReadOnlyList_1<::StringW> (*)()>(&GlobalNamespace::GlobalNamespace__OVRSceneManager__Classification::get_List)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2608b5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSceneManager__Classification>::get(),
                            "get_List",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void GlobalNamespace::GlobalNamespace__OVRSceneManager__Classification::__set__List_k__BackingField(System::Collections::Generic::IReadOnlyList_1<::StringW> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::IReadOnlyList_1<::StringW>, "<List>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSceneManager__Classification>::get>(std::forward<System::Collections::Generic::IReadOnlyList_1<::StringW>>(value));
}
 System::Collections::Generic::IReadOnlyList_1<::StringW> GlobalNamespace::GlobalNamespace__OVRSceneManager__Classification::__get__List_k__BackingField()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::IReadOnlyList_1<::StringW>, "<List>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSceneManager__Classification>::get>();
}
 System::Collections::Generic::IReadOnlyList_1<::StringW> GlobalNamespace::GlobalNamespace__OVRSceneManager__Classification::get_List()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSceneManager__Classification>::get(),
                            "get_List",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IReadOnlyList_1<::StringW>, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRSceneManager__RoomLayoutInformation._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRSceneManager__RoomLayoutInformation::*)()>(&GlobalNamespace::GlobalNamespace__OVRSceneManager__RoomLayoutInformation::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x260618c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSceneManager__RoomLayoutInformation>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__OVRSceneManager__RoomLayoutInformation::__set_Floor(GlobalNamespace::OVRScenePlane value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OVRScenePlane, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::OVRScenePlane>(value));
}
constexpr GlobalNamespace::OVRScenePlane GlobalNamespace::GlobalNamespace__OVRSceneManager__RoomLayoutInformation::__get_Floor() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OVRScenePlane, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRSceneManager__RoomLayoutInformation::__set_Ceiling(GlobalNamespace::OVRScenePlane value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OVRScenePlane, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::OVRScenePlane>(value));
}
constexpr GlobalNamespace::OVRScenePlane GlobalNamespace::GlobalNamespace__OVRSceneManager__RoomLayoutInformation::__get_Ceiling() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OVRScenePlane, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRSceneManager__RoomLayoutInformation::__set_Walls(System::Collections::Generic::List_1<GlobalNamespace::OVRScenePlane> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<GlobalNamespace::OVRScenePlane>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<GlobalNamespace::OVRScenePlane>>(value));
}
constexpr System::Collections::Generic::List_1<GlobalNamespace::OVRScenePlane> GlobalNamespace::GlobalNamespace__OVRSceneManager__RoomLayoutInformation::__get_Walls() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<GlobalNamespace::OVRScenePlane>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__OVRSceneManager__RoomLayoutInformation GlobalNamespace::GlobalNamespace__OVRSceneManager__RoomLayoutInformation::New_ctor()  {
GlobalNamespace::GlobalNamespace__OVRSceneManager__RoomLayoutInformation o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__OVRSceneManager__RoomLayoutInformation>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__OVRSceneManager__RoomLayoutInformation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSceneManager__RoomLayoutInformation>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRSceneManager__QueryMode::GlobalNamespace__OVRSceneManager__QueryMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRSceneManager__QueryMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OVRSceneManager__QueryMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__OVRSceneManager__QueryMode  GlobalNamespace::GlobalNamespace__OVRSceneManager__QueryMode::QueryAllAnchors{0};
constexpr GlobalNamespace::GlobalNamespace__OVRSceneManager__QueryMode  GlobalNamespace::GlobalNamespace__OVRSceneManager__QueryMode::QueryByUuid{1};
constexpr GlobalNamespace::GlobalNamespace__OVRSceneManager__QueryMode  GlobalNamespace::GlobalNamespace__OVRSceneManager__QueryMode::QueryAllBounded2DEnabled{2};
constexpr GlobalNamespace::GlobalNamespace__OVRSceneManager__QueryMode  GlobalNamespace::GlobalNamespace__OVRSceneManager__QueryMode::QueryAllRoomLayoutEnabledForAllEntitiesInside{3};
constexpr GlobalNamespace::GlobalNamespace__OVRSceneManager__QueryMode  GlobalNamespace::GlobalNamespace__OVRSceneManager__QueryMode::QueryAllRoomLayoutEnabledForRoomBox{4};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRSceneManager__LogForwarder.Log
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRSceneManager__LogForwarder::*)(::StringW, ::StringW)>(&GlobalNamespace::GlobalNamespace__OVRSceneManager__LogForwarder::Log)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2606e78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSceneManager__LogForwarder>::get(),
                            "Log",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRSceneManager__LogForwarder.LogWarning
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRSceneManager__LogForwarder::*)(::StringW, ::StringW)>(&GlobalNamespace::GlobalNamespace__OVRSceneManager__LogForwarder::LogWarning)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2606f2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSceneManager__LogForwarder>::get(),
                            "LogWarning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRSceneManager__LogForwarder.LogError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRSceneManager__LogForwarder::*)(::StringW, ::StringW)>(&GlobalNamespace::GlobalNamespace__OVRSceneManager__LogForwarder::LogError)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2605094;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSceneManager__LogForwarder>::get(),
                            "LogError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
 void GlobalNamespace::GlobalNamespace__OVRSceneManager__LogForwarder::Log(::StringW context, ::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSceneManager__LogForwarder>::get(),
                            "Log",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, context, message);
}
 void GlobalNamespace::GlobalNamespace__OVRSceneManager__LogForwarder::LogWarning(::StringW context, ::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSceneManager__LogForwarder>::get(),
                            "LogWarning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, context, message);
}
 void GlobalNamespace::GlobalNamespace__OVRSceneManager__LogForwarder::LogError(::StringW context, ::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSceneManager__LogForwarder>::get(),
                            "LogError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, context, message);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRSceneManager__Development.Log
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW)>(&GlobalNamespace::GlobalNamespace__OVRSceneManager__Development::Log)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2608f74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSceneManager__Development>::get(),
                            "Log",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRSceneManager__Development.LogWarning
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW)>(&GlobalNamespace::GlobalNamespace__OVRSceneManager__Development::LogWarning)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2609028;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSceneManager__Development>::get(),
                            "LogWarning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRSceneManager__Development.LogError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW)>(&GlobalNamespace::GlobalNamespace__OVRSceneManager__Development::LogError)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x26090dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSceneManager__Development>::get(),
                            "LogError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
 void GlobalNamespace::GlobalNamespace__OVRSceneManager__Development::Log(::StringW context, ::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSceneManager__Development>::get(),
                            "Log",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, context, message);
}
 void GlobalNamespace::GlobalNamespace__OVRSceneManager__Development::LogWarning(::StringW context, ::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSceneManager__Development>::get(),
                            "LogWarning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, context, message);
}
 void GlobalNamespace::GlobalNamespace__OVRSceneManager__Development::LogError(::StringW context, ::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSceneManager__Development>::get(),
                            "LogError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, context, message);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::*)(int32_t)>(&GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2609190;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::*)()>(&GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x26091c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::*)()>(&GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::MoveNext)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x26091c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d.System_Collections_Generic_IEnumerator_System_String__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::*)()>(&GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::System_Collections_Generic_IEnumerator_System_String__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26093e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d>::get(),
                            "System.Collections.Generic.IEnumerator<System.String>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::*)()>(&GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x26093ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::*)()>(&GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x260942c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d.System_Collections_Generic_IEnumerable_System_String__GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerator_1<::StringW> (GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::*)()>(&GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::System_Collections_Generic_IEnumerable_System_String__GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2609434;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d>::get(),
                            "System.Collections.Generic.IEnumerable<System.String>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator (GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::*)()>(&GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x26094d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<::StringW>
constexpr  GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::operator System::Collections::Generic::IEnumerable_1<::StringW>() const noexcept {
return System::Collections::Generic::IEnumerable_1<::StringW>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::StringW>
constexpr  GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::operator System::Collections::Generic::IEnumerator_1<::StringW>() const noexcept {
return System::Collections::Generic::IEnumerator_1<::StringW>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::__set___2__current(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::__get___2__current() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::__set___l__initialThreadId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::__get___l__initialThreadId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::__set___4__this(GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0 value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0 GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::New_ctor(int32_t __1__state)  {
GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d>(__1__state))};
return o;
}
 void GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::System_Collections_Generic_IEnumerator_System_String__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d>::get(),
                            "System.Collections.Generic.IEnumerator<System.String>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerator_1<::StringW> GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::System_Collections_Generic_IEnumerable_System_String__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d>::get(),
                            "System.Collections.Generic.IEnumerable<System.String>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<::StringW>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0::*)()>(&GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2608848;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0._ProcessQueryResult_g__EnabledComponents_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<::StringW> (GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0::*)()>(&GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0::_ProcessQueryResult_g__EnabledComponents_0)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2608850;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0>::get(),
                            "<ProcessQueryResult>g__EnabledComponents|0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0::__set_space(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0::__get_space() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0::__set_bounded2dEnabled(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0::__get_bounded2dEnabled() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0::__set_bounded3dEnabled(bool value)  {
::cordl_internals::setInstanceField<bool, 0x19>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0::__get_bounded3dEnabled() const {
return ::cordl_internals::getInstanceField<bool, 0x19>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0::__set_roomLayoutEnabled(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1a>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0::__get_roomLayoutEnabled() const {
return ::cordl_internals::getInstanceField<bool, 0x1a>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0 GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0::New_ctor()  {
GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0 o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerable_1<::StringW> GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0::_ProcessQueryResult_g__EnabledComponents_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSceneManager____c__DisplayClass47_0>::get(),
                            "<ProcessQueryResult>g__EnabledComponents|0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<::StringW>, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::OVRSceneManager.get_Verbose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Nullable_1<GlobalNamespace::GlobalNamespace__OVRSceneManager__LogForwarder> (GlobalNamespace::OVRSceneManager::*)()>(&GlobalNamespace::OVRSceneManager::get_Verbose)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2604eb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSceneManager>::get(),
                            "get_Verbose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSceneManager.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneManager::*)()>(&GlobalNamespace::OVRSceneManager::Awake)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2604f1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSceneManager>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSceneManager.OnTrackingSpaceChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Transform)>(&GlobalNamespace::OVRSceneManager::OnTrackingSpaceChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2605148;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSceneManager>::get(),
                            "OnTrackingSpaceChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSceneManager.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneManager::*)()>(&GlobalNamespace::OVRSceneManager::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x26052e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSceneManager>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSceneManager.UpdateAllSceneAnchors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRSceneManager::UpdateAllSceneAnchors)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x260514c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSceneManager>::get(),
                            "UpdateAllSceneAnchors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSceneManager.UpdateSomeSceneAnchors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneManager::*)()>(&GlobalNamespace::OVRSceneManager::UpdateSomeSceneAnchors)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x26052e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSceneManager>::get(),
                            "UpdateSomeSceneAnchors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSceneManager.LoadSceneModel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRSceneManager::*)()>(&GlobalNamespace::OVRSceneManager::LoadSceneModel)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2605414;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSceneManager>::get(),
                            "LoadSceneModel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSceneManager.RequestSceneCapture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRSceneManager::*)()>(&GlobalNamespace::OVRSceneManager::RequestSceneCapture)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2605814;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSceneManager>::get(),
                            "RequestSceneCapture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSceneManager.RequestSceneCapture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRSceneManager::*)(System::Collections::Generic::IEnumerable_1<::StringW>)>(&GlobalNamespace::OVRSceneManager::RequestSceneCapture)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x26058c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSceneManager>::get(),
                            "RequestSceneCapture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSceneManager.RequestSceneCapture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRSceneManager::*)(::StringW)>(&GlobalNamespace::OVRSceneManager::RequestSceneCapture)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x260585c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSceneManager>::get(),
                            "RequestSceneCapture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSceneManager.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneManager::*)()>(&GlobalNamespace::OVRSceneManager::OnEnable)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x2605ba0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSceneManager>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSceneManager.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneManager::*)()>(&GlobalNamespace::OVRSceneManager::OnDisable)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x2605ec4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSceneManager>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSceneManager.LoadSpatialEntities
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRSceneManager::*)()>(&GlobalNamespace::OVRSceneManager::LoadSpatialEntities)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x2605420;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSceneManager>::get(),
                            "LoadSpatialEntities",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSceneManager.EnableComponentIfNecessary
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRSceneManager::*)(GlobalNamespace::OVRSpace, System::Guid, GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceComponentType)>(&GlobalNamespace::OVRSceneManager::EnableComponentIfNecessary)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x2606fe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSceneManager>::get(),
                            "EnableComponentIfNecessary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRSpace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceComponentType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSceneManager.OVRManager_SceneCaptureComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneManager::*)(uint64_t, bool)>(&GlobalNamespace::OVRSceneManager::OVRManager_SceneCaptureComplete)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2607318;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSceneManager>::get(),
                            "OVRManager_SceneCaptureComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSceneManager.IsComponentEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::OVRSpace, GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceComponentType)>(&GlobalNamespace::OVRSceneManager::IsComponentEnabled)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x260742c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSceneManager>::get(),
                            "IsComponentEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRSpace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceComponentType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSceneManager.InstantiateSceneAnchor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRSceneAnchor (GlobalNamespace::OVRSceneManager::*)(GlobalNamespace::OVRSpace, System::Guid, GlobalNamespace::OVRSceneAnchor)>(&GlobalNamespace::OVRSceneManager::InstantiateSceneAnchor)> {
  constexpr static std::size_t size = 0x6c0;
  constexpr static std::size_t addrs = 0x26074b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSceneManager>::get(),
                            "InstantiateSceneAnchor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRSpace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRSceneAnchor>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSceneManager.OVRManager_SpaceQueryComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneManager::*)(uint64_t, bool)>(&GlobalNamespace::OVRSceneManager::OVRManager_SpaceQueryComplete)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x2607b74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSceneManager>::get(),
                            "OVRManager_SpaceQueryComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSceneManager.CheckForCompletion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneManager::*)()>(&GlobalNamespace::OVRSceneManager::CheckForCompletion)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2608694;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSceneManager>::get(),
                            "CheckForCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSceneManager.OVRManager_SpaceSetComponentStatusComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneManager::*)(uint64_t, bool, GlobalNamespace::OVRSpace, System::Guid, GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceComponentType, bool)>(&GlobalNamespace::OVRSceneManager::OVRManager_SpaceSetComponentStatusComplete)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2608760;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSceneManager>::get(),
                            "OVRManager_SpaceSetComponentStatusComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRSpace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceComponentType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSceneManager.ProcessQueryResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneManager::*)(GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult)>(&GlobalNamespace::OVRSceneManager::ProcessQueryResult)> {
  constexpr static std::size_t size = 0x88c;
  constexpr static std::size_t addrs = 0x2607e08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSceneManager>::get(),
                            "ProcessQueryResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSceneManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneManager::*)()>(&GlobalNamespace::OVRSceneManager::_ctor)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x26088cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSceneManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSceneManager._Awake_b__28_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::OVRSceneManager::*)(GlobalNamespace::OVRScenePlane, GlobalNamespace::OVRScenePlane)>(&GlobalNamespace::OVRSceneManager::_Awake_b__28_0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2608a68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSceneManager>::get(),
                            "<Awake>b__28_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRScenePlane>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRScenePlane>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSceneManager._Awake_g__TryGetUuid_28_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRSceneManager::*)(GlobalNamespace::OVRScenePlane, ByRef<int32_t>)>(&GlobalNamespace::OVRSceneManager::_Awake_g__TryGetUuid_28_1)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2608ac8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSceneManager>::get(),
                            "<Awake>g__TryGetUuid|28_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRScenePlane>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::OVRSceneManager::__set_PlanePrefab(GlobalNamespace::OVRSceneAnchor value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OVRSceneAnchor, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::OVRSceneAnchor>(value));
}
constexpr GlobalNamespace::OVRSceneAnchor GlobalNamespace::OVRSceneManager::__get_PlanePrefab() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OVRSceneAnchor, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRSceneManager::__set_VolumePrefab(GlobalNamespace::OVRSceneAnchor value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OVRSceneAnchor, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::OVRSceneAnchor>(value));
}
constexpr GlobalNamespace::OVRSceneAnchor GlobalNamespace::OVRSceneManager::__get_VolumePrefab() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OVRSceneAnchor, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRSceneManager::__set_PrefabOverrides(System::Collections::Generic::List_1<GlobalNamespace::OVRScenePrefabOverride> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<GlobalNamespace::OVRScenePrefabOverride>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<GlobalNamespace::OVRScenePrefabOverride>>(value));
}
constexpr System::Collections::Generic::List_1<GlobalNamespace::OVRScenePrefabOverride> GlobalNamespace::OVRSceneManager::__get_PrefabOverrides() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<GlobalNamespace::OVRScenePrefabOverride>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRSceneManager::__set_VerboseLogging(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::OVRSceneManager::__get_VerboseLogging() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRSceneManager::__set_MaxSceneAnchorUpdatesPerFrame(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::OVRSceneManager::__get_MaxSceneAnchorUpdatesPerFrame() const {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRSceneManager::__set_SceneModelLoadedSuccessfully(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::OVRSceneManager::__get_SceneModelLoadedSuccessfully() const {
return ::cordl_internals::getInstanceField<System::Action, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRSceneManager::__set_NoSceneModelToLoad(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::OVRSceneManager::__get_NoSceneModelToLoad() const {
return ::cordl_internals::getInstanceField<System::Action, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRSceneManager::__set_SceneCaptureReturnedWithoutError(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::OVRSceneManager::__get_SceneCaptureReturnedWithoutError() const {
return ::cordl_internals::getInstanceField<System::Action, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRSceneManager::__set_UnexpectedErrorWithSceneCapture(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::OVRSceneManager::__get_UnexpectedErrorWithSceneCapture() const {
return ::cordl_internals::getInstanceField<System::Action, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRSceneManager::__set_RoomLayout(GlobalNamespace::GlobalNamespace__OVRSceneManager__RoomLayoutInformation value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRSceneManager__RoomLayoutInformation, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRSceneManager__RoomLayoutInformation>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRSceneManager__RoomLayoutInformation GlobalNamespace::OVRSceneManager::__get_RoomLayout() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRSceneManager__RoomLayoutInformation, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRSceneManager::__set__orderedRoomGuids(System::Collections::Generic::Dictionary_2<System::Guid,int32_t> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<System::Guid,int32_t>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<System::Guid,int32_t>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<System::Guid,int32_t> GlobalNamespace::OVRSceneManager::__get__orderedRoomGuids() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<System::Guid,int32_t>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRSceneManager::__set__wallOrderComparer(System::Comparison_1<GlobalNamespace::OVRScenePlane> value)  {
::cordl_internals::setInstanceField<System::Comparison_1<GlobalNamespace::OVRScenePlane>, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Comparison_1<GlobalNamespace::OVRScenePlane>>(value));
}
constexpr System::Comparison_1<GlobalNamespace::OVRScenePlane> GlobalNamespace::OVRSceneManager::__get__wallOrderComparer() const {
return ::cordl_internals::getInstanceField<System::Comparison_1<GlobalNamespace::OVRScenePlane>, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRSceneManager::__set__uuidsToQuery(System::Collections::Generic::List_1<System::Guid> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<System::Guid>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<System::Guid>>(value));
}
constexpr System::Collections::Generic::List_1<System::Guid> GlobalNamespace::OVRSceneManager::__get__uuidsToQuery() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<System::Guid>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRSceneManager::__set__currentQueryMode(GlobalNamespace::GlobalNamespace__OVRSceneManager__QueryMode value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRSceneManager__QueryMode, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRSceneManager__QueryMode>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRSceneManager__QueryMode GlobalNamespace::OVRSceneManager::__get__currentQueryMode() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRSceneManager__QueryMode, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRSceneManager::__set__sceneCaptureRequestId(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t GlobalNamespace::OVRSceneManager::__get__sceneCaptureRequestId() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRSceneManager::__set__individualRequestIds(System::Collections::Generic::HashSet_1<uint64_t> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::HashSet_1<uint64_t>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::HashSet_1<uint64_t>>(value));
}
constexpr System::Collections::Generic::HashSet_1<uint64_t> GlobalNamespace::OVRSceneManager::__get__individualRequestIds() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::HashSet_1<uint64_t>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRSceneManager::__set__pendingLocatable(System::Collections::Generic::Dictionary_2<GlobalNamespace::OVRSpace,GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<GlobalNamespace::OVRSpace,GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<GlobalNamespace::OVRSpace,GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<GlobalNamespace::OVRSpace,GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult> GlobalNamespace::OVRSceneManager::__get__pendingLocatable() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<GlobalNamespace::OVRSpace,GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRSceneManager::__set__cameraRig(GlobalNamespace::OVRCameraRig value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OVRCameraRig, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::OVRCameraRig>(value));
}
constexpr GlobalNamespace::OVRCameraRig GlobalNamespace::OVRSceneManager::__get__cameraRig() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OVRCameraRig, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRSceneManager::__set__sceneAnchorUpdateIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::OVRSceneManager::__get__sceneAnchorUpdateIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRSceneManager::__set__uuidSet(System::Collections::Generic::HashSet_1<System::Guid> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::HashSet_1<System::Guid>, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::HashSet_1<System::Guid>>(value));
}
constexpr System::Collections::Generic::HashSet_1<System::Guid> GlobalNamespace::OVRSceneManager::__get__uuidSet() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::HashSet_1<System::Guid>, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRSceneManager::__set__sceneLoadComplete(bool value)  {
::cordl_internals::setInstanceField<bool, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::OVRSceneManager::__get__sceneLoadComplete() const {
return ::cordl_internals::getInstanceField<bool, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Nullable_1<GlobalNamespace::GlobalNamespace__OVRSceneManager__LogForwarder> GlobalNamespace::OVRSceneManager::get_Verbose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSceneManager>::get(),
                            "get_Verbose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Nullable_1<GlobalNamespace::GlobalNamespace__OVRSceneManager__LogForwarder>, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRSceneManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSceneManager>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRSceneManager::OnTrackingSpaceChanged(UnityEngine::Transform trackingSpace)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSceneManager>::get(),
                            "OnTrackingSpaceChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, trackingSpace);
}
 void GlobalNamespace::OVRSceneManager::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSceneManager>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRSceneManager::UpdateAllSceneAnchors()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSceneManager>::get(),
                            "UpdateAllSceneAnchors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void GlobalNamespace::OVRSceneManager::UpdateSomeSceneAnchors()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSceneManager>::get(),
                            "UpdateSomeSceneAnchors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::OVRSceneManager::LoadSceneModel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSceneManager>::get(),
                            "LoadSceneModel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::OVRSceneManager::RequestSceneCapture()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSceneManager>::get(),
                            "RequestSceneCapture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::OVRSceneManager::RequestSceneCapture(System::Collections::Generic::IEnumerable_1<::StringW> requestedAnchorClassifications)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSceneManager>::get(),
                            "RequestSceneCapture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, requestedAnchorClassifications);
}
 bool GlobalNamespace::OVRSceneManager::RequestSceneCapture(::StringW requestString)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSceneManager>::get(),
                            "RequestSceneCapture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, requestString);
}
 void GlobalNamespace::OVRSceneManager::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSceneManager>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRSceneManager::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSceneManager>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::OVRSceneManager::LoadSpatialEntities()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSceneManager>::get(),
                            "LoadSpatialEntities",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::OVRSceneManager::EnableComponentIfNecessary(GlobalNamespace::OVRSpace space, System::Guid uuid, GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceComponentType componentType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSceneManager>::get(),
                            "EnableComponentIfNecessary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRSpace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceComponentType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, space, uuid, componentType);
}
 void GlobalNamespace::OVRSceneManager::OVRManager_SceneCaptureComplete(uint64_t requestId, bool result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSceneManager>::get(),
                            "OVRManager_SceneCaptureComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, requestId, result);
}
 bool GlobalNamespace::OVRSceneManager::IsComponentEnabled(GlobalNamespace::OVRSpace space, GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceComponentType componentType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSceneManager>::get(),
                            "IsComponentEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRSpace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceComponentType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, space, componentType);
}
 GlobalNamespace::OVRSceneAnchor GlobalNamespace::OVRSceneManager::InstantiateSceneAnchor(GlobalNamespace::OVRSpace space, System::Guid uuid, GlobalNamespace::OVRSceneAnchor prefab)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSceneManager>::get(),
                            "InstantiateSceneAnchor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRSpace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRSceneAnchor>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::OVRSceneAnchor, false>(const_cast<void*>(instance), ___internal_method, space, uuid, prefab);
}
 void GlobalNamespace::OVRSceneManager::OVRManager_SpaceQueryComplete(uint64_t requestId, bool result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSceneManager>::get(),
                            "OVRManager_SpaceQueryComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, requestId, result);
}
 void GlobalNamespace::OVRSceneManager::CheckForCompletion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSceneManager>::get(),
                            "CheckForCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRSceneManager::OVRManager_SpaceSetComponentStatusComplete(uint64_t requestId, bool result, GlobalNamespace::OVRSpace space, System::Guid uuid, GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceComponentType componentType, bool isEnabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSceneManager>::get(),
                            "OVRManager_SpaceSetComponentStatusComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRSpace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceComponentType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, requestId, result, space, uuid, componentType, isEnabled);
}
 void GlobalNamespace::OVRSceneManager::ProcessQueryResult(GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult queryResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSceneManager>::get(),
                            "ProcessQueryResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, queryResult);
}
 GlobalNamespace::OVRSceneManager GlobalNamespace::OVRSceneManager::New_ctor()  {
GlobalNamespace::OVRSceneManager o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::OVRSceneManager>())};
return o;
}
 void GlobalNamespace::OVRSceneManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSceneManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t GlobalNamespace::OVRSceneManager::_Awake_b__28_0(GlobalNamespace::OVRScenePlane planeA, GlobalNamespace::OVRScenePlane planeB)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSceneManager>::get(),
                            "<Awake>b__28_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRScenePlane>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRScenePlane>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, planeA, planeB);
}
 bool GlobalNamespace::OVRSceneManager::_Awake_g__TryGetUuid_28_1(GlobalNamespace::OVRScenePlane plane, ByRef<int32_t> index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSceneManager>::get(),
                            "<Awake>g__TryGetUuid|28_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRScenePlane>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, plane, index);
}
