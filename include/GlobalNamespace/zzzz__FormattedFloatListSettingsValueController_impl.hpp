#pragma once
#include "GlobalNamespace/zzzz__ListSettingsController_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__FormattedFloatListSettingsValueController_def.hpp"
#include "GlobalNamespace/zzzz__FloatSO_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__FormattedFloatListSettingsValueController__ValueType::____GlobalNamespace__FormattedFloatListSettingsValueController__ValueType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__FormattedFloatListSettingsValueController__ValueType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__FormattedFloatListSettingsValueController__ValueType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::____GlobalNamespace__FormattedFloatListSettingsValueController__ValueType  ::GlobalNamespace::____GlobalNamespace__FormattedFloatListSettingsValueController__ValueType::Normal{0};
constexpr ::GlobalNamespace::____GlobalNamespace__FormattedFloatListSettingsValueController__ValueType  ::GlobalNamespace::____GlobalNamespace__FormattedFloatListSettingsValueController__ValueType::Normalized{1};
constexpr ::GlobalNamespace::____GlobalNamespace__FormattedFloatListSettingsValueController__ValueType  ::GlobalNamespace::____GlobalNamespace__FormattedFloatListSettingsValueController__ValueType::InvertedNormalized{2};
//  Writing Method size for method: ::GlobalNamespace::FormattedFloatListSettingsValueController.GetInitValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::FormattedFloatListSettingsValueController::*)(ByRef<int32_t>, ByRef<int32_t>)>(&::GlobalNamespace::FormattedFloatListSettingsValueController::GetInitValues)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2152dfc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::FormattedFloatListSettingsValueController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FormattedFloatListSettingsValueController>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FormattedFloatListSettingsValueController.ApplyValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FormattedFloatListSettingsValueController::*)(int32_t)>(&::GlobalNamespace::FormattedFloatListSettingsValueController::ApplyValue)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2152edc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::FormattedFloatListSettingsValueController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FormattedFloatListSettingsValueController>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FormattedFloatListSettingsValueController.TextForValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::FormattedFloatListSettingsValueController::*)(int32_t)>(&::GlobalNamespace::FormattedFloatListSettingsValueController::TextForValue)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2152f50;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::FormattedFloatListSettingsValueController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FormattedFloatListSettingsValueController>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FormattedFloatListSettingsValueController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FormattedFloatListSettingsValueController::*)()>(&::GlobalNamespace::FormattedFloatListSettingsValueController::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x215302c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FormattedFloatListSettingsValueController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::FormattedFloatListSettingsValueController::__set__settingsValue(::GlobalNamespace::FloatSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::FloatSO, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::FloatSO>(value));
}
constexpr ::GlobalNamespace::FloatSO ::GlobalNamespace::FormattedFloatListSettingsValueController::__get__settingsValue() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FloatSO, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::FormattedFloatListSettingsValueController::__set__values(::ArrayW<float_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<float_t>>(value));
}
constexpr ::ArrayW<float_t> ::GlobalNamespace::FormattedFloatListSettingsValueController::__get__values() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::FormattedFloatListSettingsValueController::__set__formattingString(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::FormattedFloatListSettingsValueController::__get__formattingString() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::FormattedFloatListSettingsValueController::__set_valueType(::GlobalNamespace::____GlobalNamespace__FormattedFloatListSettingsValueController__ValueType value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__FormattedFloatListSettingsValueController__ValueType, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__FormattedFloatListSettingsValueController__ValueType>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__FormattedFloatListSettingsValueController__ValueType ::GlobalNamespace::FormattedFloatListSettingsValueController::__get_valueType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__FormattedFloatListSettingsValueController__ValueType, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::FormattedFloatListSettingsValueController::__set__min(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::FormattedFloatListSettingsValueController::__get__min() const {
return ::cordl_internals::getInstanceField<float_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::FormattedFloatListSettingsValueController::__set__max(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::FormattedFloatListSettingsValueController::__get__max() const {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool ::GlobalNamespace::FormattedFloatListSettingsValueController::GetInitValues(ByRef<int32_t> idx, ByRef<int32_t> numberOfElements)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FormattedFloatListSettingsValueController>::get(),
                            "GetInitValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, idx, numberOfElements);
}
 void ::GlobalNamespace::FormattedFloatListSettingsValueController::ApplyValue(int32_t idx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FormattedFloatListSettingsValueController>::get(),
                            "ApplyValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, idx);
}
 ::StringW ::GlobalNamespace::FormattedFloatListSettingsValueController::TextForValue(int32_t idx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FormattedFloatListSettingsValueController>::get(),
                            "TextForValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, idx);
}
// Ctor Parameters []
 ::GlobalNamespace::FormattedFloatListSettingsValueController::FormattedFloatListSettingsValueController()  : ::GlobalNamespace::ListSettingsController(THROW_UNLESS(::il2cpp_utils::New<FormattedFloatListSettingsValueController>())) {}
 void ::GlobalNamespace::FormattedFloatListSettingsValueController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FormattedFloatListSettingsValueController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
