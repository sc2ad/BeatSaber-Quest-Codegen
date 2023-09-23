#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__KeyboardShortcutsManager_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut::*)(UnityEngine::KeyCode, UnityEngine::KeyCode, UnityEngine::KeyCode)>(&GlobalNamespace::GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x1f72ae0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::KeyCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::KeyCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::KeyCode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut::*)()>(&GlobalNamespace::GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut::GetHashCode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1f73060;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut::*)(::bs_hook::Il2CppWrapperType)>(&GlobalNamespace::GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut::Equals)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x1f73074;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut::__set_mainKey(UnityEngine::KeyCode value)  {
::cordl_internals::setInstanceField<UnityEngine::KeyCode, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::KeyCode>(value));
}
constexpr UnityEngine::KeyCode GlobalNamespace::GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut::__get_mainKey() const {
return ::cordl_internals::getInstanceField<UnityEngine::KeyCode, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut::__set_combinationKey1(UnityEngine::KeyCode value)  {
::cordl_internals::setInstanceField<UnityEngine::KeyCode, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::KeyCode>(value));
}
constexpr UnityEngine::KeyCode GlobalNamespace::GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut::__get_combinationKey1() const {
return ::cordl_internals::getInstanceField<UnityEngine::KeyCode, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut::__set_combinationKey2(UnityEngine::KeyCode value)  {
::cordl_internals::setInstanceField<UnityEngine::KeyCode, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::KeyCode>(value));
}
constexpr UnityEngine::KeyCode GlobalNamespace::GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut::__get_combinationKey2() const {
return ::cordl_internals::getInstanceField<UnityEngine::KeyCode, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "mainKey", ty: "UnityEngine::KeyCode", modifiers: "", def_value: None }, CppParam { name: "combinationKey1", ty: "UnityEngine::KeyCode", modifiers: "", def_value: None }, CppParam { name: "combinationKey2", ty: "UnityEngine::KeyCode", modifiers: "", def_value: None }]
 GlobalNamespace::GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut::GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut(UnityEngine::KeyCode mainKey, UnityEngine::KeyCode combinationKey1, UnityEngine::KeyCode combinationKey2)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut>(mainKey, combinationKey1, combinationKey2))) {}
 void GlobalNamespace::GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut::_ctor(UnityEngine::KeyCode mainKey, UnityEngine::KeyCode combinationKey1, UnityEngine::KeyCode combinationKey2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::KeyCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::KeyCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::KeyCode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, mainKey, combinationKey1, combinationKey2);
}
 int32_t GlobalNamespace::GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, obj);
}
//  Writing Method size for method: GlobalNamespace::KeyboardShortcutsManager.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::KeyboardShortcutsManager::*)()>(&GlobalNamespace::KeyboardShortcutsManager::Update)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x1f723ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KeyboardShortcutsManager>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::KeyboardShortcutsManager.RemoveKeyboardShortcuts
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::KeyboardShortcutsManager::*)(System::Collections::Generic::Dictionary_2<UnityEngine::KeyCode,System::Action>)>(&GlobalNamespace::KeyboardShortcutsManager::RemoveKeyboardShortcuts)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x1f726e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KeyboardShortcutsManager>::get(),
                            "RemoveKeyboardShortcuts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<UnityEngine::KeyCode,System::Action>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::KeyboardShortcutsManager.RemoveKeyboardShortcuts
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::KeyboardShortcutsManager::*)(System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut,System::Action>)>(&GlobalNamespace::KeyboardShortcutsManager::RemoveKeyboardShortcuts)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x1f7285c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KeyboardShortcutsManager>::get(),
                            "RemoveKeyboardShortcuts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut,System::Action>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::KeyboardShortcutsManager.RemoveKeyboardShortcut
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::KeyboardShortcutsManager::*)(GlobalNamespace::GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut, System::Action)>(&GlobalNamespace::KeyboardShortcutsManager::RemoveKeyboardShortcut)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1f729b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KeyboardShortcutsManager>::get(),
                            "RemoveKeyboardShortcut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::KeyboardShortcutsManager.RemoveKeyboardShortcut
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::KeyboardShortcutsManager::*)(UnityEngine::KeyCode, UnityEngine::KeyCode, UnityEngine::KeyCode, System::Action)>(&GlobalNamespace::KeyboardShortcutsManager::RemoveKeyboardShortcut)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1f72a50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KeyboardShortcutsManager>::get(),
                            "RemoveKeyboardShortcut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::KeyCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::KeyCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::KeyCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::KeyboardShortcutsManager.RemoveKeyboardShortcut
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::KeyboardShortcutsManager::*)(UnityEngine::KeyCode, UnityEngine::KeyCode, System::Action)>(&GlobalNamespace::KeyboardShortcutsManager::RemoveKeyboardShortcut)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1f72b1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KeyboardShortcutsManager>::get(),
                            "RemoveKeyboardShortcut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::KeyCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::KeyCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::KeyboardShortcutsManager.RemoveKeyboardShortcut
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::KeyboardShortcutsManager::*)(UnityEngine::KeyCode, System::Action)>(&GlobalNamespace::KeyboardShortcutsManager::RemoveKeyboardShortcut)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1f7284c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KeyboardShortcutsManager>::get(),
                            "RemoveKeyboardShortcut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::KeyCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::KeyboardShortcutsManager.AddKeyboardShortcuts
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::KeyboardShortcutsManager::*)(System::Collections::Generic::Dictionary_2<UnityEngine::KeyCode,System::Action>)>(&GlobalNamespace::KeyboardShortcutsManager::AddKeyboardShortcuts)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x1f72b28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KeyboardShortcutsManager>::get(),
                            "AddKeyboardShortcuts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<UnityEngine::KeyCode,System::Action>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::KeyboardShortcutsManager.AddKeyboardShortcuts
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::KeyboardShortcutsManager::*)(System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut,System::Action>)>(&GlobalNamespace::KeyboardShortcutsManager::AddKeyboardShortcuts)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x1f72c9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KeyboardShortcutsManager>::get(),
                            "AddKeyboardShortcuts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut,System::Action>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::KeyboardShortcutsManager.AddKeyboardShortcut
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::KeyboardShortcutsManager::*)(GlobalNamespace::GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut, System::Action)>(&GlobalNamespace::KeyboardShortcutsManager::AddKeyboardShortcut)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x1f72df4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KeyboardShortcutsManager>::get(),
                            "AddKeyboardShortcut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::KeyboardShortcutsManager.AddKeyboardShortcut
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::KeyboardShortcutsManager::*)(UnityEngine::KeyCode, UnityEngine::KeyCode, UnityEngine::KeyCode, System::Action)>(&GlobalNamespace::KeyboardShortcutsManager::AddKeyboardShortcut)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1f72f48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KeyboardShortcutsManager>::get(),
                            "AddKeyboardShortcut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::KeyCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::KeyCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::KeyCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::KeyboardShortcutsManager.AddKeyboardShortcut
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::KeyboardShortcutsManager::*)(UnityEngine::KeyCode, UnityEngine::KeyCode, System::Action)>(&GlobalNamespace::KeyboardShortcutsManager::AddKeyboardShortcut)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1f72fd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KeyboardShortcutsManager>::get(),
                            "AddKeyboardShortcut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::KeyCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::KeyCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::KeyboardShortcutsManager.AddKeyboardShortcut
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::KeyboardShortcutsManager::*)(UnityEngine::KeyCode, System::Action)>(&GlobalNamespace::KeyboardShortcutsManager::AddKeyboardShortcut)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1f72c8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KeyboardShortcutsManager>::get(),
                            "AddKeyboardShortcut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::KeyCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::KeyboardShortcutsManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::KeyboardShortcutsManager::*)()>(&GlobalNamespace::KeyboardShortcutsManager::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1f72fe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KeyboardShortcutsManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::KeyboardShortcutsManager::__set__keyboardShortcutActions(System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut,System::Collections::Generic::List_1<System::Action>> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut,System::Collections::Generic::List_1<System::Action>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut,System::Collections::Generic::List_1<System::Action>>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut,System::Collections::Generic::List_1<System::Action>> GlobalNamespace::KeyboardShortcutsManager::__get__keyboardShortcutActions() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut,System::Collections::Generic::List_1<System::Action>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::KeyboardShortcutsManager::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KeyboardShortcutsManager>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::KeyboardShortcutsManager::RemoveKeyboardShortcuts(System::Collections::Generic::Dictionary_2<UnityEngine::KeyCode,System::Action> shortcutActions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KeyboardShortcutsManager>::get(),
                            "RemoveKeyboardShortcuts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<UnityEngine::KeyCode,System::Action>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, shortcutActions);
}
 void GlobalNamespace::KeyboardShortcutsManager::RemoveKeyboardShortcuts(System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut,System::Action> shortcutActions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KeyboardShortcutsManager>::get(),
                            "RemoveKeyboardShortcuts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut,System::Action>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, shortcutActions);
}
 void GlobalNamespace::KeyboardShortcutsManager::RemoveKeyboardShortcut(GlobalNamespace::GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut keyboardShortcut, System::Action callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KeyboardShortcutsManager>::get(),
                            "RemoveKeyboardShortcut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, keyboardShortcut, callback);
}
 void GlobalNamespace::KeyboardShortcutsManager::RemoveKeyboardShortcut(UnityEngine::KeyCode mainKey, UnityEngine::KeyCode combinationKey1, UnityEngine::KeyCode combinationKey2, System::Action callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KeyboardShortcutsManager>::get(),
                            "RemoveKeyboardShortcut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::KeyCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::KeyCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::KeyCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, mainKey, combinationKey1, combinationKey2, callback);
}
 void GlobalNamespace::KeyboardShortcutsManager::RemoveKeyboardShortcut(UnityEngine::KeyCode mainKey, UnityEngine::KeyCode combinationKey1, System::Action callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KeyboardShortcutsManager>::get(),
                            "RemoveKeyboardShortcut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::KeyCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::KeyCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, mainKey, combinationKey1, callback);
}
 void GlobalNamespace::KeyboardShortcutsManager::RemoveKeyboardShortcut(UnityEngine::KeyCode mainKey, System::Action callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KeyboardShortcutsManager>::get(),
                            "RemoveKeyboardShortcut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::KeyCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, mainKey, callback);
}
 void GlobalNamespace::KeyboardShortcutsManager::AddKeyboardShortcuts(System::Collections::Generic::Dictionary_2<UnityEngine::KeyCode,System::Action> shortcutActions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KeyboardShortcutsManager>::get(),
                            "AddKeyboardShortcuts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<UnityEngine::KeyCode,System::Action>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, shortcutActions);
}
 void GlobalNamespace::KeyboardShortcutsManager::AddKeyboardShortcuts(System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut,System::Action> shortcutActions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KeyboardShortcutsManager>::get(),
                            "AddKeyboardShortcuts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut,System::Action>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, shortcutActions);
}
 void GlobalNamespace::KeyboardShortcutsManager::AddKeyboardShortcut(GlobalNamespace::GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut keyboardShortcut, System::Action callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KeyboardShortcutsManager>::get(),
                            "AddKeyboardShortcut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, keyboardShortcut, callback);
}
 void GlobalNamespace::KeyboardShortcutsManager::AddKeyboardShortcut(UnityEngine::KeyCode mainKey, UnityEngine::KeyCode combinationKey1, UnityEngine::KeyCode combinationKey2, System::Action callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KeyboardShortcutsManager>::get(),
                            "AddKeyboardShortcut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::KeyCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::KeyCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::KeyCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, mainKey, combinationKey1, combinationKey2, callback);
}
 void GlobalNamespace::KeyboardShortcutsManager::AddKeyboardShortcut(UnityEngine::KeyCode mainKey, UnityEngine::KeyCode combinationKey1, System::Action callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KeyboardShortcutsManager>::get(),
                            "AddKeyboardShortcut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::KeyCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::KeyCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, mainKey, combinationKey1, callback);
}
 void GlobalNamespace::KeyboardShortcutsManager::AddKeyboardShortcut(UnityEngine::KeyCode mainKey, System::Action callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KeyboardShortcutsManager>::get(),
                            "AddKeyboardShortcut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::KeyCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, mainKey, callback);
}
// Ctor Parameters []
 GlobalNamespace::KeyboardShortcutsManager::KeyboardShortcutsManager()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<KeyboardShortcutsManager>())) {}
 void GlobalNamespace::KeyboardShortcutsManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::KeyboardShortcutsManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
