#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveChecker_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveTypeSO_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjective_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__MissionObjectiveChecker__Status::GlobalNamespace__MissionObjectiveChecker__Status(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__MissionObjectiveChecker__Status::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__MissionObjectiveChecker__Status::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__MissionObjectiveChecker__Status  GlobalNamespace::GlobalNamespace__MissionObjectiveChecker__Status::None{0};
constexpr GlobalNamespace::GlobalNamespace__MissionObjectiveChecker__Status  GlobalNamespace::GlobalNamespace__MissionObjectiveChecker__Status::NotClearedYet{1};
constexpr GlobalNamespace::GlobalNamespace__MissionObjectiveChecker__Status  GlobalNamespace::GlobalNamespace__MissionObjectiveChecker__Status::NotFailedYet{2};
constexpr GlobalNamespace::GlobalNamespace__MissionObjectiveChecker__Status  GlobalNamespace::GlobalNamespace__MissionObjectiveChecker__Status::Cleared{3};
constexpr GlobalNamespace::GlobalNamespace__MissionObjectiveChecker__Status  GlobalNamespace::GlobalNamespace__MissionObjectiveChecker__Status::Failed{4};
//  Writing Method size for method: GlobalNamespace::MissionObjectiveChecker.add_statusDidChangeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionObjectiveChecker::*)(System::Action_1<GlobalNamespace::MissionObjectiveChecker>)>(&GlobalNamespace::MissionObjectiveChecker::add_statusDidChangeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x20d6ad4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionObjectiveChecker>::get(),
                            "add_statusDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::MissionObjectiveChecker>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MissionObjectiveChecker.remove_statusDidChangeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionObjectiveChecker::*)(System::Action_1<GlobalNamespace::MissionObjectiveChecker>)>(&GlobalNamespace::MissionObjectiveChecker::remove_statusDidChangeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x20d6b84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionObjectiveChecker>::get(),
                            "remove_statusDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::MissionObjectiveChecker>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MissionObjectiveChecker.add_checkedValueDidChangeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionObjectiveChecker::*)(System::Action_1<GlobalNamespace::MissionObjectiveChecker>)>(&GlobalNamespace::MissionObjectiveChecker::add_checkedValueDidChangeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x20d6c34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionObjectiveChecker>::get(),
                            "add_checkedValueDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::MissionObjectiveChecker>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MissionObjectiveChecker.remove_checkedValueDidChangeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionObjectiveChecker::*)(System::Action_1<GlobalNamespace::MissionObjectiveChecker>)>(&GlobalNamespace::MissionObjectiveChecker::remove_checkedValueDidChangeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x20d6ce4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionObjectiveChecker>::get(),
                            "remove_checkedValueDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::MissionObjectiveChecker>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MissionObjectiveChecker.get_missionObjectiveType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MissionObjectiveTypeSO (GlobalNamespace::MissionObjectiveChecker::*)()>(&GlobalNamespace::MissionObjectiveChecker::get_missionObjectiveType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20d6d94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionObjectiveChecker>::get(),
                            "get_missionObjectiveType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MissionObjectiveChecker.get_missionObjective
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MissionObjective (GlobalNamespace::MissionObjectiveChecker::*)()>(&GlobalNamespace::MissionObjectiveChecker::get_missionObjective)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20d6d9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionObjectiveChecker>::get(),
                            "get_missionObjective",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MissionObjectiveChecker.get_disableChecking
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MissionObjectiveChecker::*)()>(&GlobalNamespace::MissionObjectiveChecker::get_disableChecking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20d6da4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionObjectiveChecker>::get(),
                            "get_disableChecking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MissionObjectiveChecker.set_disableChecking
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionObjectiveChecker::*)(bool)>(&GlobalNamespace::MissionObjectiveChecker::set_disableChecking)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x20d6dac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionObjectiveChecker>::get(),
                            "set_disableChecking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MissionObjectiveChecker.get_status
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__MissionObjectiveChecker__Status (GlobalNamespace::MissionObjectiveChecker::*)()>(&GlobalNamespace::MissionObjectiveChecker::get_status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20d6db8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionObjectiveChecker>::get(),
                            "get_status",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MissionObjectiveChecker.set_status
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionObjectiveChecker::*)(GlobalNamespace::GlobalNamespace__MissionObjectiveChecker__Status)>(&GlobalNamespace::MissionObjectiveChecker::set_status)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x20d5b8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionObjectiveChecker>::get(),
                            "set_status",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__MissionObjectiveChecker__Status>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MissionObjectiveChecker.get_checkedValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::MissionObjectiveChecker::*)()>(&GlobalNamespace::MissionObjectiveChecker::get_checkedValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20d6dc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionObjectiveChecker>::get(),
                            "get_checkedValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MissionObjectiveChecker.set_checkedValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionObjectiveChecker::*)(int32_t)>(&GlobalNamespace::MissionObjectiveChecker::set_checkedValue)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x20d5cec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionObjectiveChecker>::get(),
                            "set_checkedValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MissionObjectiveChecker.SetCheckedMissionObjective
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionObjectiveChecker::*)(GlobalNamespace::MissionObjective)>(&GlobalNamespace::MissionObjectiveChecker::SetCheckedMissionObjective)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x20d6dc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionObjectiveChecker>::get(),
                            "SetCheckedMissionObjective",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MissionObjective>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MissionObjectiveChecker.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionObjectiveChecker::*)()>(&GlobalNamespace::MissionObjectiveChecker::Init)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::MissionObjectiveChecker),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionObjectiveChecker>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MissionObjectiveChecker._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionObjectiveChecker::*)()>(&GlobalNamespace::MissionObjectiveChecker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20d63f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionObjectiveChecker>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MissionObjectiveChecker::__set__missionObjectiveType(GlobalNamespace::MissionObjectiveTypeSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MissionObjectiveTypeSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MissionObjectiveTypeSO>(value));
}
constexpr GlobalNamespace::MissionObjectiveTypeSO GlobalNamespace::MissionObjectiveChecker::__get__missionObjectiveType() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MissionObjectiveTypeSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MissionObjectiveChecker::__set_statusDidChangeEvent(System::Action_1<GlobalNamespace::MissionObjectiveChecker> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::MissionObjectiveChecker>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::MissionObjectiveChecker>>(value));
}
constexpr System::Action_1<GlobalNamespace::MissionObjectiveChecker> GlobalNamespace::MissionObjectiveChecker::__get_statusDidChangeEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::MissionObjectiveChecker>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MissionObjectiveChecker::__set_checkedValueDidChangeEvent(System::Action_1<GlobalNamespace::MissionObjectiveChecker> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::MissionObjectiveChecker>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::MissionObjectiveChecker>>(value));
}
constexpr System::Action_1<GlobalNamespace::MissionObjectiveChecker> GlobalNamespace::MissionObjectiveChecker::__get_checkedValueDidChangeEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::MissionObjectiveChecker>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MissionObjectiveChecker::__set__status(GlobalNamespace::GlobalNamespace__MissionObjectiveChecker__Status value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__MissionObjectiveChecker__Status, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__MissionObjectiveChecker__Status>(value));
}
constexpr GlobalNamespace::GlobalNamespace__MissionObjectiveChecker__Status GlobalNamespace::MissionObjectiveChecker::__get__status() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__MissionObjectiveChecker__Status, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MissionObjectiveChecker::__set__checkedValue(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::MissionObjectiveChecker::__get__checkedValue() const {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MissionObjectiveChecker::__set__missionObjective(GlobalNamespace::MissionObjective value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MissionObjective, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MissionObjective>(value));
}
constexpr GlobalNamespace::MissionObjective GlobalNamespace::MissionObjectiveChecker::__get__missionObjective() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MissionObjective, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MissionObjectiveChecker::__set__disableChecking(bool value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::MissionObjectiveChecker::__get__disableChecking() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::MissionObjectiveChecker::add_statusDidChangeEvent(System::Action_1<GlobalNamespace::MissionObjectiveChecker> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionObjectiveChecker>::get(),
                            "add_statusDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::MissionObjectiveChecker>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::MissionObjectiveChecker::remove_statusDidChangeEvent(System::Action_1<GlobalNamespace::MissionObjectiveChecker> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionObjectiveChecker>::get(),
                            "remove_statusDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::MissionObjectiveChecker>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::MissionObjectiveChecker::add_checkedValueDidChangeEvent(System::Action_1<GlobalNamespace::MissionObjectiveChecker> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionObjectiveChecker>::get(),
                            "add_checkedValueDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::MissionObjectiveChecker>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::MissionObjectiveChecker::remove_checkedValueDidChangeEvent(System::Action_1<GlobalNamespace::MissionObjectiveChecker> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionObjectiveChecker>::get(),
                            "remove_checkedValueDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::MissionObjectiveChecker>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 GlobalNamespace::MissionObjectiveTypeSO GlobalNamespace::MissionObjectiveChecker::get_missionObjectiveType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionObjectiveChecker>::get(),
                            "get_missionObjectiveType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::MissionObjectiveTypeSO, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::MissionObjective GlobalNamespace::MissionObjectiveChecker::get_missionObjective()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionObjectiveChecker>::get(),
                            "get_missionObjective",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::MissionObjective, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::MissionObjectiveChecker::get_disableChecking()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionObjectiveChecker>::get(),
                            "get_disableChecking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MissionObjectiveChecker::set_disableChecking(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionObjectiveChecker>::get(),
                            "set_disableChecking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 GlobalNamespace::GlobalNamespace__MissionObjectiveChecker__Status GlobalNamespace::MissionObjectiveChecker::get_status()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionObjectiveChecker>::get(),
                            "get_status",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__MissionObjectiveChecker__Status, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MissionObjectiveChecker::set_status(GlobalNamespace::GlobalNamespace__MissionObjectiveChecker__Status value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionObjectiveChecker>::get(),
                            "set_status",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__MissionObjectiveChecker__Status>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t GlobalNamespace::MissionObjectiveChecker::get_checkedValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionObjectiveChecker>::get(),
                            "get_checkedValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MissionObjectiveChecker::set_checkedValue(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionObjectiveChecker>::get(),
                            "set_checkedValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::MissionObjectiveChecker::SetCheckedMissionObjective(GlobalNamespace::MissionObjective missionObjective)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionObjectiveChecker>::get(),
                            "SetCheckedMissionObjective",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MissionObjective>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, missionObjective);
}
 void GlobalNamespace::MissionObjectiveChecker::Init()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionObjectiveChecker>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::MissionObjectiveChecker::MissionObjectiveChecker()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<MissionObjectiveChecker>())) {}
 void GlobalNamespace::MissionObjectiveChecker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionObjectiveChecker>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
