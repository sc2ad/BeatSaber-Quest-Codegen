#pragma once
#include "GlobalNamespace/zzzz__InstantMenuButtonTrigger_def.hpp"
#include "Zenject/zzzz__ITickable_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
#include "GlobalNamespace/zzzz__IMenuButtonTrigger_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: GlobalNamespace::InstantMenuButtonTrigger.add_menuButtonTriggeredEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::InstantMenuButtonTrigger::*)(System::Action)>(&GlobalNamespace::InstantMenuButtonTrigger::add_menuButtonTriggeredEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20ce6f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::InstantMenuButtonTrigger>::get(),
                            "add_menuButtonTriggeredEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::InstantMenuButtonTrigger.remove_menuButtonTriggeredEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::InstantMenuButtonTrigger::*)(System::Action)>(&GlobalNamespace::InstantMenuButtonTrigger::remove_menuButtonTriggeredEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20ce78c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::InstantMenuButtonTrigger>::get(),
                            "remove_menuButtonTriggeredEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::InstantMenuButtonTrigger.Tick
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::InstantMenuButtonTrigger::*)()>(&GlobalNamespace::InstantMenuButtonTrigger::Tick)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x20ce828;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::InstantMenuButtonTrigger>::get(),
                            "Tick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::InstantMenuButtonTrigger._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::InstantMenuButtonTrigger::*)()>(&GlobalNamespace::InstantMenuButtonTrigger::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20ce8f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::InstantMenuButtonTrigger>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Zenject::ITickable
constexpr  GlobalNamespace::InstantMenuButtonTrigger::operator Zenject::ITickable() const noexcept {
return Zenject::ITickable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::IMenuButtonTrigger
constexpr  GlobalNamespace::InstantMenuButtonTrigger::operator GlobalNamespace::IMenuButtonTrigger() const noexcept {
return GlobalNamespace::IMenuButtonTrigger(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::InstantMenuButtonTrigger::__set__vrPlatformHelper(GlobalNamespace::IVRPlatformHelper value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IVRPlatformHelper, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IVRPlatformHelper>(value));
}
constexpr GlobalNamespace::IVRPlatformHelper GlobalNamespace::InstantMenuButtonTrigger::__get__vrPlatformHelper() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IVRPlatformHelper, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::InstantMenuButtonTrigger::__set_menuButtonTriggeredEvent(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::InstantMenuButtonTrigger::__get_menuButtonTriggeredEvent() const {
return ::cordl_internals::getInstanceField<System::Action, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::InstantMenuButtonTrigger::add_menuButtonTriggeredEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::InstantMenuButtonTrigger>::get(),
                            "add_menuButtonTriggeredEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::InstantMenuButtonTrigger::remove_menuButtonTriggeredEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::InstantMenuButtonTrigger>::get(),
                            "remove_menuButtonTriggeredEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::InstantMenuButtonTrigger::Tick()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::InstantMenuButtonTrigger>::get(),
                            "Tick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::InstantMenuButtonTrigger::InstantMenuButtonTrigger()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<InstantMenuButtonTrigger>())) {}
 void GlobalNamespace::InstantMenuButtonTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::InstantMenuButtonTrigger>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
