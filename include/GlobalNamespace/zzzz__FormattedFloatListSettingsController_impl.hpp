#pragma once
#include "GlobalNamespace/zzzz__ListSettingsController_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "GlobalNamespace/zzzz__FormattedFloatListSettingsController_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__FormattedFloatListSettingsController__ValueType::GlobalNamespace__FormattedFloatListSettingsController__ValueType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__FormattedFloatListSettingsController__ValueType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__FormattedFloatListSettingsController__ValueType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__FormattedFloatListSettingsController__ValueType  GlobalNamespace::GlobalNamespace__FormattedFloatListSettingsController__ValueType::Normal{0};
constexpr GlobalNamespace::GlobalNamespace__FormattedFloatListSettingsController__ValueType  GlobalNamespace::GlobalNamespace__FormattedFloatListSettingsController__ValueType::Normalized{1};
constexpr GlobalNamespace::GlobalNamespace__FormattedFloatListSettingsController__ValueType  GlobalNamespace::GlobalNamespace__FormattedFloatListSettingsController__ValueType::InvertedNormalized{2};
//  Writing Method size for method: GlobalNamespace::FormattedFloatListSettingsController.add_valueDidChangeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FormattedFloatListSettingsController::*)(System::Action_2<GlobalNamespace::FormattedFloatListSettingsController,float_t>)>(&GlobalNamespace::FormattedFloatListSettingsController::add_valueDidChangeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2152910;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FormattedFloatListSettingsController>::get(),
                            "add_valueDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::FormattedFloatListSettingsController,float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FormattedFloatListSettingsController.remove_valueDidChangeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FormattedFloatListSettingsController::*)(System::Action_2<GlobalNamespace::FormattedFloatListSettingsController,float_t>)>(&GlobalNamespace::FormattedFloatListSettingsController::remove_valueDidChangeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21529c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FormattedFloatListSettingsController>::get(),
                            "remove_valueDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::FormattedFloatListSettingsController,float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FormattedFloatListSettingsController.get_value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::FormattedFloatListSettingsController::*)()>(&GlobalNamespace::FormattedFloatListSettingsController::get_value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2152a70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FormattedFloatListSettingsController>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FormattedFloatListSettingsController.get_values
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float_t> (GlobalNamespace::FormattedFloatListSettingsController::*)()>(&GlobalNamespace::FormattedFloatListSettingsController::get_values)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2152a78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FormattedFloatListSettingsController>::get(),
                            "get_values",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FormattedFloatListSettingsController.set_values
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FormattedFloatListSettingsController::*)(::ArrayW<float_t>)>(&GlobalNamespace::FormattedFloatListSettingsController::set_values)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2152a80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FormattedFloatListSettingsController>::get(),
                            "set_values",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FormattedFloatListSettingsController.SetValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FormattedFloatListSettingsController::*)(float_t, bool)>(&GlobalNamespace::FormattedFloatListSettingsController::SetValue)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x214c44c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FormattedFloatListSettingsController>::get(),
                            "SetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FormattedFloatListSettingsController.GetInitValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::FormattedFloatListSettingsController::*)(ByRef<int32_t>, ByRef<int32_t>)>(&GlobalNamespace::FormattedFloatListSettingsController::GetInitValues)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2152b14;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::FormattedFloatListSettingsController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FormattedFloatListSettingsController>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FormattedFloatListSettingsController.ApplyValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FormattedFloatListSettingsController::*)(int32_t)>(&GlobalNamespace::FormattedFloatListSettingsController::ApplyValue)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2152c64;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::FormattedFloatListSettingsController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FormattedFloatListSettingsController>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FormattedFloatListSettingsController.TextForValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::FormattedFloatListSettingsController::*)(int32_t)>(&GlobalNamespace::FormattedFloatListSettingsController::TextForValue)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2152cbc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::FormattedFloatListSettingsController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FormattedFloatListSettingsController>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FormattedFloatListSettingsController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FormattedFloatListSettingsController::*)()>(&GlobalNamespace::FormattedFloatListSettingsController::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2152d98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FormattedFloatListSettingsController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::FormattedFloatListSettingsController::__set__values(::ArrayW<float_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<float_t>>(value));
}
constexpr ::ArrayW<float_t> GlobalNamespace::FormattedFloatListSettingsController::__get__values() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FormattedFloatListSettingsController::__set__formattingString(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::FormattedFloatListSettingsController::__get__formattingString() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FormattedFloatListSettingsController::__set_valueType(GlobalNamespace::GlobalNamespace__FormattedFloatListSettingsController__ValueType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__FormattedFloatListSettingsController__ValueType, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__FormattedFloatListSettingsController__ValueType>(value));
}
constexpr GlobalNamespace::GlobalNamespace__FormattedFloatListSettingsController__ValueType GlobalNamespace::FormattedFloatListSettingsController::__get_valueType() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__FormattedFloatListSettingsController__ValueType, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FormattedFloatListSettingsController::__set_valueDidChangeEvent(System::Action_2<GlobalNamespace::FormattedFloatListSettingsController,float_t> value)  {
::cordl_internals::setInstanceField<System::Action_2<GlobalNamespace::FormattedFloatListSettingsController,float_t>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<GlobalNamespace::FormattedFloatListSettingsController,float_t>>(value));
}
constexpr System::Action_2<GlobalNamespace::FormattedFloatListSettingsController,float_t> GlobalNamespace::FormattedFloatListSettingsController::__get_valueDidChangeEvent() const {
return ::cordl_internals::getInstanceField<System::Action_2<GlobalNamespace::FormattedFloatListSettingsController,float_t>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FormattedFloatListSettingsController::__set__value(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::FormattedFloatListSettingsController::__get__value() const {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FormattedFloatListSettingsController::__set__min(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::FormattedFloatListSettingsController::__get__min() const {
return ::cordl_internals::getInstanceField<float_t, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FormattedFloatListSettingsController::__set__max(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::FormattedFloatListSettingsController::__get__max() const {
return ::cordl_internals::getInstanceField<float_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FormattedFloatListSettingsController::__set__hasValue(bool value)  {
::cordl_internals::setInstanceField<bool, 0x54>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::FormattedFloatListSettingsController::__get__hasValue() const {
return ::cordl_internals::getInstanceField<bool, 0x54>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::FormattedFloatListSettingsController::add_valueDidChangeEvent(System::Action_2<GlobalNamespace::FormattedFloatListSettingsController,float_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FormattedFloatListSettingsController>::get(),
                            "add_valueDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::FormattedFloatListSettingsController,float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::FormattedFloatListSettingsController::remove_valueDidChangeEvent(System::Action_2<GlobalNamespace::FormattedFloatListSettingsController,float_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FormattedFloatListSettingsController>::get(),
                            "remove_valueDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::FormattedFloatListSettingsController,float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t GlobalNamespace::FormattedFloatListSettingsController::get_value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FormattedFloatListSettingsController>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<float_t> GlobalNamespace::FormattedFloatListSettingsController::get_values()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FormattedFloatListSettingsController>::get(),
                            "get_values",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::FormattedFloatListSettingsController::set_values(::ArrayW<float_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FormattedFloatListSettingsController>::get(),
                            "set_values",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
/// @param callCallback: bool (default: false)
 void GlobalNamespace::FormattedFloatListSettingsController::SetValue(float_t value, bool callCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FormattedFloatListSettingsController>::get(),
                            "SetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value, callCallback);
}
 bool GlobalNamespace::FormattedFloatListSettingsController::GetInitValues(ByRef<int32_t> idx, ByRef<int32_t> numberOfElements)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FormattedFloatListSettingsController>::get(),
                            "GetInitValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, idx, numberOfElements);
}
 void GlobalNamespace::FormattedFloatListSettingsController::ApplyValue(int32_t idx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FormattedFloatListSettingsController>::get(),
                            "ApplyValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, idx);
}
 ::StringW GlobalNamespace::FormattedFloatListSettingsController::TextForValue(int32_t idx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FormattedFloatListSettingsController>::get(),
                            "TextForValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, idx);
}
// Ctor Parameters []
 GlobalNamespace::FormattedFloatListSettingsController::FormattedFloatListSettingsController()  : GlobalNamespace::ListSettingsController(THROW_UNLESS(::il2cpp_utils::New<FormattedFloatListSettingsController>())) {}
 void GlobalNamespace::FormattedFloatListSettingsController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FormattedFloatListSettingsController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
