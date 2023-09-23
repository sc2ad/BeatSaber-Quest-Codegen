#pragma once
#include "System/zzzz__EventArgs_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ErrorEventArgs_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ErrorContext_def.hpp"
//  Writing Method size for method: Newtonsoft::Json::Serialization::ErrorEventArgs.get_CurrentObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (Newtonsoft::Json::Serialization::ErrorEventArgs::*)()>(&Newtonsoft::Json::Serialization::ErrorEventArgs::get_CurrentObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24f66f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::ErrorEventArgs>::get(),
                            "get_CurrentObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::ErrorEventArgs.set_CurrentObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::ErrorEventArgs::*)(::bs_hook::Il2CppWrapperType)>(&Newtonsoft::Json::Serialization::ErrorEventArgs::set_CurrentObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24f66fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::ErrorEventArgs>::get(),
                            "set_CurrentObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::ErrorEventArgs.get_ErrorContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Newtonsoft::Json::Serialization::ErrorContext (Newtonsoft::Json::Serialization::ErrorEventArgs::*)()>(&Newtonsoft::Json::Serialization::ErrorEventArgs::get_ErrorContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24f6704;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::ErrorEventArgs>::get(),
                            "get_ErrorContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::ErrorEventArgs.set_ErrorContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::ErrorEventArgs::*)(Newtonsoft::Json::Serialization::ErrorContext)>(&Newtonsoft::Json::Serialization::ErrorEventArgs::set_ErrorContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24f670c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::ErrorEventArgs>::get(),
                            "set_ErrorContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::ErrorContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::ErrorEventArgs._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::ErrorEventArgs::*)(::bs_hook::Il2CppWrapperType, Newtonsoft::Json::Serialization::ErrorContext)>(&Newtonsoft::Json::Serialization::ErrorEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x24f6714;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::ErrorEventArgs>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::ErrorContext>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Newtonsoft::Json::Serialization::ErrorEventArgs::__set__CurrentObject_k__BackingField(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType Newtonsoft::Json::Serialization::ErrorEventArgs::__get__CurrentObject_k__BackingField() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Newtonsoft::Json::Serialization::ErrorEventArgs::__set__ErrorContext_k__BackingField(Newtonsoft::Json::Serialization::ErrorContext value)  {
::cordl_internals::setInstanceField<Newtonsoft::Json::Serialization::ErrorContext, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Newtonsoft::Json::Serialization::ErrorContext>(value));
}
constexpr Newtonsoft::Json::Serialization::ErrorContext Newtonsoft::Json::Serialization::ErrorEventArgs::__get__ErrorContext_k__BackingField() const {
return ::cordl_internals::getInstanceField<Newtonsoft::Json::Serialization::ErrorContext, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::bs_hook::Il2CppWrapperType Newtonsoft::Json::Serialization::ErrorEventArgs::get_CurrentObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::ErrorEventArgs>::get(),
                            "get_CurrentObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 void Newtonsoft::Json::Serialization::ErrorEventArgs::set_CurrentObject(::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::ErrorEventArgs>::get(),
                            "set_CurrentObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 Newtonsoft::Json::Serialization::ErrorContext Newtonsoft::Json::Serialization::ErrorEventArgs::get_ErrorContext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::ErrorEventArgs>::get(),
                            "get_ErrorContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Newtonsoft::Json::Serialization::ErrorContext, false>(const_cast<void*>(instance), ___internal_method);
}
 void Newtonsoft::Json::Serialization::ErrorEventArgs::set_ErrorContext(Newtonsoft::Json::Serialization::ErrorContext value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::ErrorEventArgs>::get(),
                            "set_ErrorContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::ErrorContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "currentObject", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "errorContext", ty: "Newtonsoft::Json::Serialization::ErrorContext", modifiers: "", def_value: None }]
 Newtonsoft::Json::Serialization::ErrorEventArgs::ErrorEventArgs(::bs_hook::Il2CppWrapperType currentObject, Newtonsoft::Json::Serialization::ErrorContext errorContext)  : System::EventArgs(THROW_UNLESS(::il2cpp_utils::New<ErrorEventArgs>(currentObject, errorContext))) {}
 void Newtonsoft::Json::Serialization::ErrorEventArgs::_ctor(::bs_hook::Il2CppWrapperType currentObject, Newtonsoft::Json::Serialization::ErrorContext errorContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::ErrorEventArgs>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::ErrorContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, currentObject, errorContext);
}
