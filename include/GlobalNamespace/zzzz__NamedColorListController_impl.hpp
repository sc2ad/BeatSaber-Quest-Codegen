#pragma once
#include "GlobalNamespace/zzzz__ListColorController_impl.hpp"
#include "GlobalNamespace/zzzz__NamedColorListController_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "HMUI/zzzz__IValueChanger_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__NamedColorListController__ColorValuePair._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__NamedColorListController__ColorValuePair::*)()>(&GlobalNamespace::GlobalNamespace__NamedColorListController__ColorValuePair::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2126d4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NamedColorListController__ColorValuePair>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__NamedColorListController__ColorValuePair::__set_color(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color GlobalNamespace::GlobalNamespace__NamedColorListController__ColorValuePair::__get_color() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__NamedColorListController__ColorValuePair::__set_value(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__NamedColorListController__ColorValuePair::__get_value() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__NamedColorListController__ColorValuePair::GlobalNamespace__NamedColorListController__ColorValuePair()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__NamedColorListController__ColorValuePair>())) {}
 void GlobalNamespace::GlobalNamespace__NamedColorListController__ColorValuePair::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__NamedColorListController__ColorValuePair>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::NamedColorListController.add_valueChangedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NamedColorListController::*)(System::Action_1<int32_t>)>(&GlobalNamespace::NamedColorListController::add_valueChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2126aa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NamedColorListController>::get(),
                            "add_valueChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NamedColorListController.remove_valueChangedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NamedColorListController::*)(System::Action_1<int32_t>)>(&GlobalNamespace::NamedColorListController::remove_valueChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2126b50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NamedColorListController>::get(),
                            "remove_valueChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NamedColorListController.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NamedColorListController::*)(::ArrayW<GlobalNamespace::GlobalNamespace__NamedColorListController__ColorValuePair>, int32_t)>(&GlobalNamespace::NamedColorListController::Init)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2126c00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NamedColorListController>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<GlobalNamespace::GlobalNamespace__NamedColorListController__ColorValuePair>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NamedColorListController.SetValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NamedColorListController::*)(int32_t)>(&GlobalNamespace::NamedColorListController::SetValue)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2126c3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NamedColorListController>::get(),
                            "SetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NamedColorListController.GetInitValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::NamedColorListController::*)(ByRef<int32_t>, ByRef<int32_t>)>(&GlobalNamespace::NamedColorListController::GetInitValues)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2126c74;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::NamedColorListController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NamedColorListController>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NamedColorListController.ApplyValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NamedColorListController::*)(int32_t)>(&GlobalNamespace::NamedColorListController::ApplyValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2126ce8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::NamedColorListController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NamedColorListController>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NamedColorListController.ColorForValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::NamedColorListController::*)(int32_t)>(&GlobalNamespace::NamedColorListController::ColorForValue)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2126d08;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::NamedColorListController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NamedColorListController>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NamedColorListController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NamedColorListController::*)()>(&GlobalNamespace::NamedColorListController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2126d44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NamedColorListController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to HMUI::IValueChanger_1<int32_t>
constexpr  GlobalNamespace::NamedColorListController::operator HMUI::IValueChanger_1<int32_t>() const noexcept {
return HMUI::IValueChanger_1<int32_t>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NamedColorListController::__set__textValuePairs(::ArrayW<GlobalNamespace::GlobalNamespace__NamedColorListController__ColorValuePair> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::GlobalNamespace__NamedColorListController__ColorValuePair>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::GlobalNamespace__NamedColorListController__ColorValuePair>>(value));
}
constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__NamedColorListController__ColorValuePair> GlobalNamespace::NamedColorListController::__get__textValuePairs() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::GlobalNamespace__NamedColorListController__ColorValuePair>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NamedColorListController::__set__value(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::NamedColorListController::__get__value() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NamedColorListController::__set_valueChangedEvent(System::Action_1<int32_t> value)  {
::cordl_internals::setInstanceField<System::Action_1<int32_t>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<int32_t>>(value));
}
constexpr System::Action_1<int32_t> GlobalNamespace::NamedColorListController::__get_valueChangedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<int32_t>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::NamedColorListController::add_valueChangedEvent(System::Action_1<int32_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NamedColorListController>::get(),
                            "add_valueChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::NamedColorListController::remove_valueChangedEvent(System::Action_1<int32_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NamedColorListController>::get(),
                            "remove_valueChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::NamedColorListController::Init(::ArrayW<GlobalNamespace::GlobalNamespace__NamedColorListController__ColorValuePair> values, int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NamedColorListController>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<GlobalNamespace::GlobalNamespace__NamedColorListController__ColorValuePair>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, values, value);
}
 void GlobalNamespace::NamedColorListController::SetValue(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NamedColorListController>::get(),
                            "SetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool GlobalNamespace::NamedColorListController::GetInitValues(ByRef<int32_t> idx, ByRef<int32_t> numberOfElements)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NamedColorListController>::get(),
                            "GetInitValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, idx, numberOfElements);
}
 void GlobalNamespace::NamedColorListController::ApplyValue(int32_t idx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NamedColorListController>::get(),
                            "ApplyValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, idx);
}
 UnityEngine::Color GlobalNamespace::NamedColorListController::ColorForValue(int32_t idx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NamedColorListController>::get(),
                            "ColorForValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Color, false>(const_cast<void*>(instance), ___internal_method, idx);
}
// Ctor Parameters []
 GlobalNamespace::NamedColorListController::NamedColorListController()  : GlobalNamespace::ListColorController(THROW_UNLESS(::il2cpp_utils::New<NamedColorListController>())) {}
 void GlobalNamespace::NamedColorListController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NamedColorListController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
