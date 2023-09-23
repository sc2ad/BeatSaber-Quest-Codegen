#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "GlobalNamespace/zzzz__NullAllowed_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__NullAllowed__Context::GlobalNamespace__NullAllowed__Context(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__NullAllowed__Context::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__NullAllowed__Context::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__NullAllowed__Context  GlobalNamespace::GlobalNamespace__NullAllowed__Context::Everywhere{0};
constexpr GlobalNamespace::GlobalNamespace__NullAllowed__Context  GlobalNamespace::GlobalNamespace__NullAllowed__Context::Prefab{1};
//  Writing Method size for method: GlobalNamespace::NullAllowed._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NullAllowed::*)()>(&GlobalNamespace::NullAllowed::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1f8f350;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NullAllowed>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NullAllowed._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NullAllowed::*)(GlobalNamespace::GlobalNamespace__NullAllowed__Context)>(&GlobalNamespace::NullAllowed::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1f8f36c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NullAllowed>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__NullAllowed__Context>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NullAllowed._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NullAllowed::*)(::StringW, ::bs_hook::Il2CppWrapperType)>(&GlobalNamespace::NullAllowed::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1f8f394;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NullAllowed>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::NullAllowed::__set_context(GlobalNamespace::GlobalNamespace__NullAllowed__Context value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__NullAllowed__Context, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__NullAllowed__Context>(value));
}
constexpr GlobalNamespace::GlobalNamespace__NullAllowed__Context GlobalNamespace::NullAllowed::__get_context() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__NullAllowed__Context, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NullAllowed::__set_propertyName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::NullAllowed::__get_propertyName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NullAllowed::__set_ifNotValue(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType GlobalNamespace::NullAllowed::__get_ifNotValue() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::NullAllowed::NullAllowed()  : UnityEngine::PropertyAttribute(THROW_UNLESS(::il2cpp_utils::New<NullAllowed>())) {}
 void GlobalNamespace::NullAllowed::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NullAllowed>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "context", ty: "GlobalNamespace::GlobalNamespace__NullAllowed__Context", modifiers: "", def_value: None }]
 GlobalNamespace::NullAllowed::NullAllowed(GlobalNamespace::GlobalNamespace__NullAllowed__Context context)  : UnityEngine::PropertyAttribute(THROW_UNLESS(::il2cpp_utils::New<NullAllowed>(context))) {}
 void GlobalNamespace::NullAllowed::_ctor(GlobalNamespace::GlobalNamespace__NullAllowed__Context context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NullAllowed>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__NullAllowed__Context>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, context);
}
// Ctor Parameters [CppParam { name: "propertyName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "ifNotValue", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
 GlobalNamespace::NullAllowed::NullAllowed(::StringW propertyName, ::bs_hook::Il2CppWrapperType ifNotValue)  : UnityEngine::PropertyAttribute(THROW_UNLESS(::il2cpp_utils::New<NullAllowed>(propertyName, ifNotValue))) {}
 void GlobalNamespace::NullAllowed::_ctor(::StringW propertyName, ::bs_hook::Il2CppWrapperType ifNotValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NullAllowed>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, propertyName, ifNotValue);
}
