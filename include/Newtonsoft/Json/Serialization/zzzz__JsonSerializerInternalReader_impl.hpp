#pragma once
#include "Newtonsoft/Json/Serialization/zzzz__JsonSerializerInternalBase_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonSerializerInternalReader_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonISerializableContract_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JTokenReader_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializer_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonArrayContract_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonSerializerInternalReader_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonProperty_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonObjectContract_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonContract_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonSerializerProxy_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonContainerContract_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonDictionaryContract_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Newtonsoft/Json/zzzz__DefaultValueHandling_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ObjectConstructor_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence  Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence::None{0};
constexpr Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence  Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence::Null{1};
constexpr Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence  Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence::Value{2};
//  Writing Method size for method: Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreatorPropertyContext._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreatorPropertyContext::*)()>(&Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreatorPropertyContext::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x250f8a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreatorPropertyContext>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreatorPropertyContext::__set_Name(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreatorPropertyContext::__get_Name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreatorPropertyContext::__set_Property(Newtonsoft::Json::Serialization::JsonProperty value)  {
::cordl_internals::setInstanceField<Newtonsoft::Json::Serialization::JsonProperty, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Newtonsoft::Json::Serialization::JsonProperty>(value));
}
constexpr Newtonsoft::Json::Serialization::JsonProperty Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreatorPropertyContext::__get_Property() const {
return ::cordl_internals::getInstanceField<Newtonsoft::Json::Serialization::JsonProperty, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreatorPropertyContext::__set_ConstructorProperty(Newtonsoft::Json::Serialization::JsonProperty value)  {
::cordl_internals::setInstanceField<Newtonsoft::Json::Serialization::JsonProperty, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Newtonsoft::Json::Serialization::JsonProperty>(value));
}
constexpr Newtonsoft::Json::Serialization::JsonProperty Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreatorPropertyContext::__get_ConstructorProperty() const {
return ::cordl_internals::getInstanceField<Newtonsoft::Json::Serialization::JsonProperty, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreatorPropertyContext::__set_Presence(System::Nullable_1<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence> value)  {
::cordl_internals::setInstanceField<System::Nullable_1<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Nullable_1<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence>>(value));
}
constexpr System::Nullable_1<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence> Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreatorPropertyContext::__get_Presence() const {
return ::cordl_internals::getInstanceField<System::Nullable_1<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreatorPropertyContext::__set_Value(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreatorPropertyContext::__get_Value() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreatorPropertyContext::__set_Used(bool value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreatorPropertyContext::__get_Used() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreatorPropertyContext Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreatorPropertyContext::New_ctor()  {
Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreatorPropertyContext o{THROW_UNLESS(::il2cpp_utils::New<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreatorPropertyContext>())};
return o;
}
 void Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreatorPropertyContext::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreatorPropertyContext>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c__DisplayClass36_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c__DisplayClass36_0::*)()>(&Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c__DisplayClass36_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x250f8ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c__DisplayClass36_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c__DisplayClass36_0._CreateObjectUsingCreatorWithParameters_b__1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c__DisplayClass36_0::*)(Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreatorPropertyContext)>(&Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c__DisplayClass36_0::_CreateObjectUsingCreatorWithParameters_b__1)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x250f8b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c__DisplayClass36_0>::get(),
                            "<CreateObjectUsingCreatorWithParameters>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreatorPropertyContext>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c__DisplayClass36_0::__set_property(Newtonsoft::Json::Serialization::JsonProperty value)  {
::cordl_internals::setInstanceField<Newtonsoft::Json::Serialization::JsonProperty, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Newtonsoft::Json::Serialization::JsonProperty>(value));
}
constexpr Newtonsoft::Json::Serialization::JsonProperty Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c__DisplayClass36_0::__get_property() const {
return ::cordl_internals::getInstanceField<Newtonsoft::Json::Serialization::JsonProperty, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c__DisplayClass36_0 Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c__DisplayClass36_0::New_ctor()  {
Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c__DisplayClass36_0 o{THROW_UNLESS(::il2cpp_utils::New<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c__DisplayClass36_0>())};
return o;
}
 void Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c__DisplayClass36_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c__DisplayClass36_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c__DisplayClass36_0::_CreateObjectUsingCreatorWithParameters_b__1(Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreatorPropertyContext p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c__DisplayClass36_0>::get(),
                            "<CreateObjectUsingCreatorWithParameters>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreatorPropertyContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, p);
}
//  Writing Method size for method: Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c::*)()>(&Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x250f93c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c._CreateObjectUsingCreatorWithParameters_b__36_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c::*)(Newtonsoft::Json::Serialization::JsonProperty)>(&Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c::_CreateObjectUsingCreatorWithParameters_b__36_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x250f944;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c>::get(),
                            "<CreateObjectUsingCreatorWithParameters>b__36_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c._CreateObjectUsingCreatorWithParameters_b__36_2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c::*)(Newtonsoft::Json::Serialization::JsonProperty)>(&Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c::_CreateObjectUsingCreatorWithParameters_b__36_2)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x250f95c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c>::get(),
                            "<CreateObjectUsingCreatorWithParameters>b__36_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c._PopulateObject_b__41_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Newtonsoft::Json::Serialization::JsonProperty (Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c::*)(Newtonsoft::Json::Serialization::JsonProperty)>(&Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c::_PopulateObject_b__41_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x250f974;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c>::get(),
                            "<PopulateObject>b__41_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c._PopulateObject_b__41_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence (Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c::*)(Newtonsoft::Json::Serialization::JsonProperty)>(&Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c::_PopulateObject_b__41_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x250f97c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c>::get(),
                            "<PopulateObject>b__41_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get()}
                        )));
    return ___internal_method;
  }
};
 void Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c::__set___9(Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c value)  {
::cordl_internals::setStaticField<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c>::get>(std::forward<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c>(value));
}
 Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c::__get___9()  {
return ::cordl_internals::getStaticField<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c>::get>();
}
 void Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c::__set___9__36_0(System::Func_2<Newtonsoft::Json::Serialization::JsonProperty,::StringW> value)  {
::cordl_internals::setStaticField<System::Func_2<Newtonsoft::Json::Serialization::JsonProperty,::StringW>, "<>9__36_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c>::get>(std::forward<System::Func_2<Newtonsoft::Json::Serialization::JsonProperty,::StringW>>(value));
}
 System::Func_2<Newtonsoft::Json::Serialization::JsonProperty,::StringW> Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c::__get___9__36_0()  {
return ::cordl_internals::getStaticField<System::Func_2<Newtonsoft::Json::Serialization::JsonProperty,::StringW>, "<>9__36_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c>::get>();
}
 void Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c::__set___9__36_2(System::Func_2<Newtonsoft::Json::Serialization::JsonProperty,::StringW> value)  {
::cordl_internals::setStaticField<System::Func_2<Newtonsoft::Json::Serialization::JsonProperty,::StringW>, "<>9__36_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c>::get>(std::forward<System::Func_2<Newtonsoft::Json::Serialization::JsonProperty,::StringW>>(value));
}
 System::Func_2<Newtonsoft::Json::Serialization::JsonProperty,::StringW> Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c::__get___9__36_2()  {
return ::cordl_internals::getStaticField<System::Func_2<Newtonsoft::Json::Serialization::JsonProperty,::StringW>, "<>9__36_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c>::get>();
}
 void Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c::__set___9__41_0(System::Func_2<Newtonsoft::Json::Serialization::JsonProperty,Newtonsoft::Json::Serialization::JsonProperty> value)  {
::cordl_internals::setStaticField<System::Func_2<Newtonsoft::Json::Serialization::JsonProperty,Newtonsoft::Json::Serialization::JsonProperty>, "<>9__41_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c>::get>(std::forward<System::Func_2<Newtonsoft::Json::Serialization::JsonProperty,Newtonsoft::Json::Serialization::JsonProperty>>(value));
}
 System::Func_2<Newtonsoft::Json::Serialization::JsonProperty,Newtonsoft::Json::Serialization::JsonProperty> Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c::__get___9__41_0()  {
return ::cordl_internals::getStaticField<System::Func_2<Newtonsoft::Json::Serialization::JsonProperty,Newtonsoft::Json::Serialization::JsonProperty>, "<>9__41_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c>::get>();
}
 void Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c::__set___9__41_1(System::Func_2<Newtonsoft::Json::Serialization::JsonProperty,Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence> value)  {
::cordl_internals::setStaticField<System::Func_2<Newtonsoft::Json::Serialization::JsonProperty,Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence>, "<>9__41_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c>::get>(std::forward<System::Func_2<Newtonsoft::Json::Serialization::JsonProperty,Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence>>(value));
}
 System::Func_2<Newtonsoft::Json::Serialization::JsonProperty,Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence> Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c::__get___9__41_1()  {
return ::cordl_internals::getStaticField<System::Func_2<Newtonsoft::Json::Serialization::JsonProperty,Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence>, "<>9__41_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c>::get>();
}
 Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c::New_ctor()  {
Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c o{THROW_UNLESS(::il2cpp_utils::New<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c>())};
return o;
}
 void Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c::_CreateObjectUsingCreatorWithParameters_b__36_0(Newtonsoft::Json::Serialization::JsonProperty p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c>::get(),
                            "<CreateObjectUsingCreatorWithParameters>b__36_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, p);
}
 ::StringW Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c::_CreateObjectUsingCreatorWithParameters_b__36_2(Newtonsoft::Json::Serialization::JsonProperty p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c>::get(),
                            "<CreateObjectUsingCreatorWithParameters>b__36_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, p);
}
 Newtonsoft::Json::Serialization::JsonProperty Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c::_PopulateObject_b__41_0(Newtonsoft::Json::Serialization::JsonProperty m)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c>::get(),
                            "<PopulateObject>b__41_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Newtonsoft::Json::Serialization::JsonProperty, false>(const_cast<void*>(instance), ___internal_method, m);
}
 Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c::_PopulateObject_b__41_1(Newtonsoft::Json::Serialization::JsonProperty m)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c>::get(),
                            "<PopulateObject>b__41_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence, false>(const_cast<void*>(instance), ___internal_method, m);
}
//  Writing Method size for method: Newtonsoft::Json::Serialization::JsonSerializerInternalReader._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(Newtonsoft::Json::JsonSerializer)>(&Newtonsoft::Json::Serialization::JsonSerializerInternalReader::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x25037e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonSerializer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::JsonSerializerInternalReader.Populate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(Newtonsoft::Json::JsonReader, ::bs_hook::Il2CppWrapperType)>(&Newtonsoft::Json::Serialization::JsonSerializerInternalReader::Populate)> {
  constexpr static std::size_t size = 0x538;
  constexpr static std::size_t addrs = 0x25037e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "Populate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::JsonSerializerInternalReader.GetContractSafe
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Newtonsoft::Json::Serialization::JsonContract (Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(System::Type)>(&Newtonsoft::Json::Serialization::JsonSerializerInternalReader::GetContractSafe)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2505528;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "GetContractSafe",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::JsonSerializerInternalReader.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(Newtonsoft::Json::JsonReader, System::Type, bool)>(&Newtonsoft::Json::Serialization::JsonSerializerInternalReader::Deserialize)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x25055ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::JsonSerializerInternalReader.GetInternalSerializer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Newtonsoft::Json::Serialization::JsonSerializerProxy (Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)()>(&Newtonsoft::Json::Serialization::JsonSerializerInternalReader::GetInternalSerializer)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2506470;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "GetInternalSerializer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::JsonSerializerInternalReader.CreateJToken
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Newtonsoft::Json::Linq::JToken (Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(Newtonsoft::Json::JsonReader, Newtonsoft::Json::Serialization::JsonContract)>(&Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateJToken)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x25064e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "CreateJToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonContract>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::JsonSerializerInternalReader.CreateJObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Newtonsoft::Json::Linq::JToken (Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(Newtonsoft::Json::JsonReader)>(&Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateJObject)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x25067c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "CreateJObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::JsonSerializerInternalReader.CreateValueInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(Newtonsoft::Json::JsonReader, System::Type, Newtonsoft::Json::Serialization::JsonContract, Newtonsoft::Json::Serialization::JsonProperty, Newtonsoft::Json::Serialization::JsonContainerContract, Newtonsoft::Json::Serialization::JsonProperty, ::bs_hook::Il2CppWrapperType)>(&Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateValueInternal)> {
  constexpr static std::size_t size = 0x494;
  constexpr static std::size_t addrs = 0x2505f70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "CreateValueInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonContainerContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::JsonSerializerInternalReader.CoerceEmptyStringToNull
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Type, Newtonsoft::Json::Serialization::JsonContract, ::StringW)>(&Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CoerceEmptyStringToNull)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x25080c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "CoerceEmptyStringToNull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::JsonSerializerInternalReader.GetExpectedDescription
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(Newtonsoft::Json::Serialization::JsonContract)>(&Newtonsoft::Json::Serialization::JsonSerializerInternalReader::GetExpectedDescription)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x25081cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "GetExpectedDescription",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonContract>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::JsonSerializerInternalReader.GetConverter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Newtonsoft::Json::JsonConverter (Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(Newtonsoft::Json::Serialization::JsonContract, Newtonsoft::Json::JsonConverter, Newtonsoft::Json::Serialization::JsonContainerContract, Newtonsoft::Json::Serialization::JsonProperty)>(&Newtonsoft::Json::Serialization::JsonSerializerInternalReader::GetConverter)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2505934;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "GetConverter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonConverter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonContainerContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::JsonSerializerInternalReader.CreateObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(Newtonsoft::Json::JsonReader, System::Type, Newtonsoft::Json::Serialization::JsonContract, Newtonsoft::Json::Serialization::JsonProperty, Newtonsoft::Json::Serialization::JsonContainerContract, Newtonsoft::Json::Serialization::JsonProperty, ::bs_hook::Il2CppWrapperType)>(&Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateObject)> {
  constexpr static std::size_t size = 0xa88;
  constexpr static std::size_t addrs = 0x2506c1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "CreateObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonContainerContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::JsonSerializerInternalReader.ReadMetadataPropertiesToken
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(Newtonsoft::Json::Linq::JTokenReader, ByRef<System::Type>, ByRef<Newtonsoft::Json::Serialization::JsonContract>, Newtonsoft::Json::Serialization::JsonProperty, Newtonsoft::Json::Serialization::JsonContainerContract, Newtonsoft::Json::Serialization::JsonProperty, ::bs_hook::Il2CppWrapperType, ByRef<::bs_hook::Il2CppWrapperType>, ByRef<::StringW>)>(&Newtonsoft::Json::Serialization::JsonSerializerInternalReader::ReadMetadataPropertiesToken)> {
  constexpr static std::size_t size = 0x728;
  constexpr static std::size_t addrs = 0x2508298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "ReadMetadataPropertiesToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Linq::JTokenReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Type>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Newtonsoft::Json::Serialization::JsonContract>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonContainerContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::JsonSerializerInternalReader.ReadMetadataProperties
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(Newtonsoft::Json::JsonReader, ByRef<System::Type>, ByRef<Newtonsoft::Json::Serialization::JsonContract>, Newtonsoft::Json::Serialization::JsonProperty, Newtonsoft::Json::Serialization::JsonContainerContract, Newtonsoft::Json::Serialization::JsonProperty, ::bs_hook::Il2CppWrapperType, ByRef<::bs_hook::Il2CppWrapperType>, ByRef<::StringW>)>(&Newtonsoft::Json::Serialization::JsonSerializerInternalReader::ReadMetadataProperties)> {
  constexpr static std::size_t size = 0x678;
  constexpr static std::size_t addrs = 0x25089c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "ReadMetadataProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Type>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Newtonsoft::Json::Serialization::JsonContract>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonContainerContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::JsonSerializerInternalReader.ResolveTypeName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(Newtonsoft::Json::JsonReader, ByRef<System::Type>, ByRef<Newtonsoft::Json::Serialization::JsonContract>, Newtonsoft::Json::Serialization::JsonProperty, Newtonsoft::Json::Serialization::JsonContainerContract, Newtonsoft::Json::Serialization::JsonProperty, ::StringW)>(&Newtonsoft::Json::Serialization::JsonSerializerInternalReader::ResolveTypeName)> {
  constexpr static std::size_t size = 0x500;
  constexpr static std::size_t addrs = 0x2509ae4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "ResolveTypeName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Type>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Newtonsoft::Json::Serialization::JsonContract>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonContainerContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::JsonSerializerInternalReader.EnsureArrayContract
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Newtonsoft::Json::Serialization::JsonArrayContract (Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(Newtonsoft::Json::JsonReader, System::Type, Newtonsoft::Json::Serialization::JsonContract)>(&Newtonsoft::Json::Serialization::JsonSerializerInternalReader::EnsureArrayContract)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x2509fe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "EnsureArrayContract",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonContract>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::JsonSerializerInternalReader.CreateList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(Newtonsoft::Json::JsonReader, System::Type, Newtonsoft::Json::Serialization::JsonContract, Newtonsoft::Json::Serialization::JsonProperty, ::bs_hook::Il2CppWrapperType, ::StringW)>(&Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateList)> {
  constexpr static std::size_t size = 0x690;
  constexpr static std::size_t addrs = 0x25076a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "CreateList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::JsonSerializerInternalReader.HasNoDefinedType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(Newtonsoft::Json::Serialization::JsonContract)>(&Newtonsoft::Json::Serialization::JsonSerializerInternalReader::HasNoDefinedType)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2509038;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "HasNoDefinedType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonContract>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::JsonSerializerInternalReader.EnsureType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(Newtonsoft::Json::JsonReader, ::bs_hook::Il2CppWrapperType, System::Globalization::CultureInfo, Newtonsoft::Json::Serialization::JsonContract, System::Type)>(&Newtonsoft::Json::Serialization::JsonSerializerInternalReader::EnsureType)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0x2507d34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "EnsureType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::JsonSerializerInternalReader.SetPropertyValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(Newtonsoft::Json::Serialization::JsonProperty, Newtonsoft::Json::JsonConverter, Newtonsoft::Json::Serialization::JsonContainerContract, Newtonsoft::Json::Serialization::JsonProperty, Newtonsoft::Json::JsonReader, ::bs_hook::Il2CppWrapperType)>(&Newtonsoft::Json::Serialization::JsonSerializerInternalReader::SetPropertyValue)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x250aa70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "SetPropertyValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonConverter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonContainerContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::JsonSerializerInternalReader.CalculatePropertyDetails
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(Newtonsoft::Json::Serialization::JsonProperty, ByRef<Newtonsoft::Json::JsonConverter>, Newtonsoft::Json::Serialization::JsonContainerContract, Newtonsoft::Json::Serialization::JsonProperty, Newtonsoft::Json::JsonReader, ::bs_hook::Il2CppWrapperType, ByRef<bool>, ByRef<::bs_hook::Il2CppWrapperType>, ByRef<Newtonsoft::Json::Serialization::JsonContract>, ByRef<bool>)>(&Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CalculatePropertyDetails)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x250aef0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "CalculatePropertyDetails",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Newtonsoft::Json::JsonConverter>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonContainerContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Newtonsoft::Json::Serialization::JsonContract>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::JsonSerializerInternalReader.AddReference
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(Newtonsoft::Json::JsonReader, ::StringW, ::bs_hook::Il2CppWrapperType)>(&Newtonsoft::Json::Serialization::JsonSerializerInternalReader::AddReference)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0x250b374;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "AddReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::JsonSerializerInternalReader.HasFlag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(Newtonsoft::Json::DefaultValueHandling, Newtonsoft::Json::DefaultValueHandling)>(&Newtonsoft::Json::Serialization::JsonSerializerInternalReader::HasFlag)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x250b368;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "HasFlag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::DefaultValueHandling>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::DefaultValueHandling>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::JsonSerializerInternalReader.ShouldSetPropertyValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(Newtonsoft::Json::Serialization::JsonProperty, ::bs_hook::Il2CppWrapperType)>(&Newtonsoft::Json::Serialization::JsonSerializerInternalReader::ShouldSetPropertyValue)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x250b248;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "ShouldSetPropertyValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::JsonSerializerInternalReader.CreateNewList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IList (Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(Newtonsoft::Json::JsonReader, Newtonsoft::Json::Serialization::JsonArrayContract, ByRef<bool>)>(&Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateNewList)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x250a164;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "CreateNewList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonArrayContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::JsonSerializerInternalReader.CreateNewDictionary
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IDictionary (Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(Newtonsoft::Json::JsonReader, Newtonsoft::Json::Serialization::JsonDictionaryContract, ByRef<bool>)>(&Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateNewDictionary)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x25092b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "CreateNewDictionary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonDictionaryContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::JsonSerializerInternalReader.OnDeserializing
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(Newtonsoft::Json::JsonReader, Newtonsoft::Json::Serialization::JsonContract, ::bs_hook::Il2CppWrapperType)>(&Newtonsoft::Json::Serialization::JsonSerializerInternalReader::OnDeserializing)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x250b738;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "OnDeserializing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::JsonSerializerInternalReader.OnDeserialized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(Newtonsoft::Json::JsonReader, Newtonsoft::Json::Serialization::JsonContract, ::bs_hook::Il2CppWrapperType)>(&Newtonsoft::Json::Serialization::JsonSerializerInternalReader::OnDeserialized)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x250b964;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "OnDeserialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::JsonSerializerInternalReader.PopulateDictionary
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(System::Collections::IDictionary, Newtonsoft::Json::JsonReader, Newtonsoft::Json::Serialization::JsonDictionaryContract, Newtonsoft::Json::Serialization::JsonProperty, ::StringW)>(&Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PopulateDictionary)> {
  constexpr static std::size_t size = 0x8c8;
  constexpr static std::size_t addrs = 0x2504238;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "PopulateDictionary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IDictionary>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonDictionaryContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::JsonSerializerInternalReader.PopulateMultidimensionalArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(System::Collections::IList, Newtonsoft::Json::JsonReader, Newtonsoft::Json::Serialization::JsonArrayContract, Newtonsoft::Json::Serialization::JsonProperty, ::StringW)>(&Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PopulateMultidimensionalArray)> {
  constexpr static std::size_t size = 0x6a4;
  constexpr static std::size_t addrs = 0x250a3cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "PopulateMultidimensionalArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonArrayContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::JsonSerializerInternalReader.ThrowUnexpectedEndException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(Newtonsoft::Json::JsonReader, Newtonsoft::Json::Serialization::JsonContract, ::bs_hook::Il2CppWrapperType, ::StringW)>(&Newtonsoft::Json::Serialization::JsonSerializerInternalReader::ThrowUnexpectedEndException)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x250bb90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "ThrowUnexpectedEndException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::JsonSerializerInternalReader.PopulateList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(System::Collections::IList, Newtonsoft::Json::JsonReader, Newtonsoft::Json::Serialization::JsonArrayContract, Newtonsoft::Json::Serialization::JsonProperty, ::StringW)>(&Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PopulateList)> {
  constexpr static std::size_t size = 0x518;
  constexpr static std::size_t addrs = 0x2503d20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "PopulateList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonArrayContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::JsonSerializerInternalReader.CreateISerializable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(Newtonsoft::Json::JsonReader, Newtonsoft::Json::Serialization::JsonISerializableContract, Newtonsoft::Json::Serialization::JsonProperty, ::StringW)>(&Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateISerializable)> {
  constexpr static std::size_t size = 0x634;
  constexpr static std::size_t addrs = 0x25094b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "CreateISerializable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonISerializableContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::JsonSerializerInternalReader.CreateISerializableItem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(Newtonsoft::Json::Linq::JToken, System::Type, Newtonsoft::Json::Serialization::JsonISerializableContract, Newtonsoft::Json::Serialization::JsonProperty)>(&Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateISerializableItem)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x24f5a18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "CreateISerializableItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Linq::JToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonISerializableContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::JsonSerializerInternalReader.CreateObjectUsingCreatorWithParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(Newtonsoft::Json::JsonReader, Newtonsoft::Json::Serialization::JsonObjectContract, Newtonsoft::Json::Serialization::JsonProperty, Newtonsoft::Json::Serialization::ObjectConstructor_1<::bs_hook::Il2CppWrapperType>, ::StringW)>(&Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateObjectUsingCreatorWithParameters)> {
  constexpr static std::size_t size = 0x1b6c;
  constexpr static std::size_t addrs = 0x250bcc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "CreateObjectUsingCreatorWithParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonObjectContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::ObjectConstructor_1<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::JsonSerializerInternalReader.DeserializeConvertable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(Newtonsoft::Json::JsonConverter, Newtonsoft::Json::JsonReader, System::Type, ::bs_hook::Il2CppWrapperType)>(&Newtonsoft::Json::Serialization::JsonSerializerInternalReader::DeserializeConvertable)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x2505b5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "DeserializeConvertable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonConverter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::JsonSerializerInternalReader.ResolvePropertyAndCreatorValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreatorPropertyContext> (Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(Newtonsoft::Json::Serialization::JsonObjectContract, Newtonsoft::Json::Serialization::JsonProperty, Newtonsoft::Json::JsonReader, System::Type)>(&Newtonsoft::Json::Serialization::JsonSerializerInternalReader::ResolvePropertyAndCreatorValues)> {
  constexpr static std::size_t size = 0x620;
  constexpr static std::size_t addrs = 0x250d830;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "ResolvePropertyAndCreatorValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonObjectContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::JsonSerializerInternalReader.ReadForType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(Newtonsoft::Json::JsonReader, Newtonsoft::Json::Serialization::JsonContract, bool)>(&Newtonsoft::Json::Serialization::JsonSerializerInternalReader::ReadForType)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x25059a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "ReadForType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::JsonSerializerInternalReader.CreateNewObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(Newtonsoft::Json::JsonReader, Newtonsoft::Json::Serialization::JsonObjectContract, Newtonsoft::Json::Serialization::JsonProperty, Newtonsoft::Json::Serialization::JsonProperty, ::StringW, ByRef<bool>)>(&Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateNewObject)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x25090d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "CreateNewObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonObjectContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::JsonSerializerInternalReader.PopulateObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(::bs_hook::Il2CppWrapperType, Newtonsoft::Json::JsonReader, Newtonsoft::Json::Serialization::JsonObjectContract, Newtonsoft::Json::Serialization::JsonProperty, ::StringW)>(&Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PopulateObject)> {
  constexpr static std::size_t size = 0xa28;
  constexpr static std::size_t addrs = 0x2504b00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "PopulateObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonObjectContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::JsonSerializerInternalReader.ShouldDeserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(Newtonsoft::Json::JsonReader, Newtonsoft::Json::Serialization::JsonProperty, ::bs_hook::Il2CppWrapperType)>(&Newtonsoft::Json::Serialization::JsonSerializerInternalReader::ShouldDeserialize)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x250e520;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "ShouldDeserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::JsonSerializerInternalReader.CheckPropertyName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(Newtonsoft::Json::JsonReader, ::StringW)>(&Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CheckPropertyName)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2506b00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "CheckPropertyName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::JsonSerializerInternalReader.SetExtensionData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(Newtonsoft::Json::Serialization::JsonObjectContract, Newtonsoft::Json::Serialization::JsonProperty, Newtonsoft::Json::JsonReader, ::StringW, ::bs_hook::Il2CppWrapperType)>(&Newtonsoft::Json::Serialization::JsonSerializerInternalReader::SetExtensionData)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x250e3ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "SetExtensionData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonObjectContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::JsonSerializerInternalReader.ReadExtensionDataValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(Newtonsoft::Json::Serialization::JsonObjectContract, Newtonsoft::Json::Serialization::JsonProperty, Newtonsoft::Json::JsonReader)>(&Newtonsoft::Json::Serialization::JsonSerializerInternalReader::ReadExtensionDataValue)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x250e2f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "ReadExtensionDataValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonObjectContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::JsonSerializerInternalReader.EndProcessProperty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(::bs_hook::Il2CppWrapperType, Newtonsoft::Json::JsonReader, Newtonsoft::Json::Serialization::JsonObjectContract, int32_t, Newtonsoft::Json::Serialization::JsonProperty, Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence, bool)>(&Newtonsoft::Json::Serialization::JsonSerializerInternalReader::EndProcessProperty)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x250de50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "EndProcessProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonObjectContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::JsonSerializerInternalReader.SetPropertyPresence
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(Newtonsoft::Json::JsonReader, Newtonsoft::Json::Serialization::JsonProperty, System::Collections::Generic::Dictionary_2<Newtonsoft::Json::Serialization::JsonProperty,Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence>)>(&Newtonsoft::Json::Serialization::JsonSerializerInternalReader::SetPropertyPresence)> {
  constexpr static std::size_t size = 0x1110;
  constexpr static std::size_t addrs = 0x250e794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "SetPropertyPresence",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<Newtonsoft::Json::Serialization::JsonProperty,Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::JsonSerializerInternalReader.HandleError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::JsonSerializerInternalReader::*)(Newtonsoft::Json::JsonReader, bool, int32_t)>(&Newtonsoft::Json::Serialization::JsonSerializerInternalReader::HandleError)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2506404;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "HandleError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
 Newtonsoft::Json::Serialization::JsonSerializerInternalReader Newtonsoft::Json::Serialization::JsonSerializerInternalReader::New_ctor(Newtonsoft::Json::JsonSerializer serializer)  {
Newtonsoft::Json::Serialization::JsonSerializerInternalReader o{THROW_UNLESS(::il2cpp_utils::New<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>(serializer))};
return o;
}
 void Newtonsoft::Json::Serialization::JsonSerializerInternalReader::_ctor(Newtonsoft::Json::JsonSerializer serializer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonSerializer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, serializer);
}
 void Newtonsoft::Json::Serialization::JsonSerializerInternalReader::Populate(Newtonsoft::Json::JsonReader reader, ::bs_hook::Il2CppWrapperType target)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "Populate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader, target);
}
 Newtonsoft::Json::Serialization::JsonContract Newtonsoft::Json::Serialization::JsonSerializerInternalReader::GetContractSafe(System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "GetContractSafe",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Newtonsoft::Json::Serialization::JsonContract, false>(const_cast<void*>(instance), ___internal_method, type);
}
 ::bs_hook::Il2CppWrapperType Newtonsoft::Json::Serialization::JsonSerializerInternalReader::Deserialize(Newtonsoft::Json::JsonReader reader, System::Type objectType, bool checkAdditionalContent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, reader, objectType, checkAdditionalContent);
}
 Newtonsoft::Json::Serialization::JsonSerializerProxy Newtonsoft::Json::Serialization::JsonSerializerInternalReader::GetInternalSerializer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "GetInternalSerializer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Newtonsoft::Json::Serialization::JsonSerializerProxy, false>(const_cast<void*>(instance), ___internal_method);
}
 Newtonsoft::Json::Linq::JToken Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateJToken(Newtonsoft::Json::JsonReader reader, Newtonsoft::Json::Serialization::JsonContract contract)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "CreateJToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonContract>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Newtonsoft::Json::Linq::JToken, false>(const_cast<void*>(instance), ___internal_method, reader, contract);
}
 Newtonsoft::Json::Linq::JToken Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateJObject(Newtonsoft::Json::JsonReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "CreateJObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Newtonsoft::Json::Linq::JToken, false>(const_cast<void*>(instance), ___internal_method, reader);
}
 ::bs_hook::Il2CppWrapperType Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateValueInternal(Newtonsoft::Json::JsonReader reader, System::Type objectType, Newtonsoft::Json::Serialization::JsonContract contract, Newtonsoft::Json::Serialization::JsonProperty member, Newtonsoft::Json::Serialization::JsonContainerContract containerContract, Newtonsoft::Json::Serialization::JsonProperty containerMember, ::bs_hook::Il2CppWrapperType existingValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "CreateValueInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonContainerContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, reader, objectType, contract, member, containerContract, containerMember, existingValue);
}
 bool Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CoerceEmptyStringToNull(System::Type objectType, Newtonsoft::Json::Serialization::JsonContract contract, ::StringW s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "CoerceEmptyStringToNull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, objectType, contract, s);
}
 ::StringW Newtonsoft::Json::Serialization::JsonSerializerInternalReader::GetExpectedDescription(Newtonsoft::Json::Serialization::JsonContract contract)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "GetExpectedDescription",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonContract>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, contract);
}
 Newtonsoft::Json::JsonConverter Newtonsoft::Json::Serialization::JsonSerializerInternalReader::GetConverter(Newtonsoft::Json::Serialization::JsonContract contract, Newtonsoft::Json::JsonConverter memberConverter, Newtonsoft::Json::Serialization::JsonContainerContract containerContract, Newtonsoft::Json::Serialization::JsonProperty containerProperty)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "GetConverter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonConverter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonContainerContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Newtonsoft::Json::JsonConverter, false>(const_cast<void*>(instance), ___internal_method, contract, memberConverter, containerContract, containerProperty);
}
 ::bs_hook::Il2CppWrapperType Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateObject(Newtonsoft::Json::JsonReader reader, System::Type objectType, Newtonsoft::Json::Serialization::JsonContract contract, Newtonsoft::Json::Serialization::JsonProperty member, Newtonsoft::Json::Serialization::JsonContainerContract containerContract, Newtonsoft::Json::Serialization::JsonProperty containerMember, ::bs_hook::Il2CppWrapperType existingValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "CreateObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonContainerContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, reader, objectType, contract, member, containerContract, containerMember, existingValue);
}
 bool Newtonsoft::Json::Serialization::JsonSerializerInternalReader::ReadMetadataPropertiesToken(Newtonsoft::Json::Linq::JTokenReader reader, ByRef<System::Type> objectType, ByRef<Newtonsoft::Json::Serialization::JsonContract> contract, Newtonsoft::Json::Serialization::JsonProperty member, Newtonsoft::Json::Serialization::JsonContainerContract containerContract, Newtonsoft::Json::Serialization::JsonProperty containerMember, ::bs_hook::Il2CppWrapperType existingValue, ByRef<::bs_hook::Il2CppWrapperType> newValue, ByRef<::StringW> id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "ReadMetadataPropertiesToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Linq::JTokenReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Type>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Newtonsoft::Json::Serialization::JsonContract>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonContainerContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, reader, objectType, contract, member, containerContract, containerMember, existingValue, newValue, id);
}
 bool Newtonsoft::Json::Serialization::JsonSerializerInternalReader::ReadMetadataProperties(Newtonsoft::Json::JsonReader reader, ByRef<System::Type> objectType, ByRef<Newtonsoft::Json::Serialization::JsonContract> contract, Newtonsoft::Json::Serialization::JsonProperty member, Newtonsoft::Json::Serialization::JsonContainerContract containerContract, Newtonsoft::Json::Serialization::JsonProperty containerMember, ::bs_hook::Il2CppWrapperType existingValue, ByRef<::bs_hook::Il2CppWrapperType> newValue, ByRef<::StringW> id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "ReadMetadataProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Type>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Newtonsoft::Json::Serialization::JsonContract>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonContainerContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, reader, objectType, contract, member, containerContract, containerMember, existingValue, newValue, id);
}
 void Newtonsoft::Json::Serialization::JsonSerializerInternalReader::ResolveTypeName(Newtonsoft::Json::JsonReader reader, ByRef<System::Type> objectType, ByRef<Newtonsoft::Json::Serialization::JsonContract> contract, Newtonsoft::Json::Serialization::JsonProperty member, Newtonsoft::Json::Serialization::JsonContainerContract containerContract, Newtonsoft::Json::Serialization::JsonProperty containerMember, ::StringW qualifiedTypeName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "ResolveTypeName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Type>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Newtonsoft::Json::Serialization::JsonContract>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonContainerContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader, objectType, contract, member, containerContract, containerMember, qualifiedTypeName);
}
 Newtonsoft::Json::Serialization::JsonArrayContract Newtonsoft::Json::Serialization::JsonSerializerInternalReader::EnsureArrayContract(Newtonsoft::Json::JsonReader reader, System::Type objectType, Newtonsoft::Json::Serialization::JsonContract contract)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "EnsureArrayContract",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonContract>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Newtonsoft::Json::Serialization::JsonArrayContract, false>(const_cast<void*>(instance), ___internal_method, reader, objectType, contract);
}
 ::bs_hook::Il2CppWrapperType Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateList(Newtonsoft::Json::JsonReader reader, System::Type objectType, Newtonsoft::Json::Serialization::JsonContract contract, Newtonsoft::Json::Serialization::JsonProperty member, ::bs_hook::Il2CppWrapperType existingValue, ::StringW id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "CreateList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, reader, objectType, contract, member, existingValue, id);
}
 bool Newtonsoft::Json::Serialization::JsonSerializerInternalReader::HasNoDefinedType(Newtonsoft::Json::Serialization::JsonContract contract)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "HasNoDefinedType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonContract>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, contract);
}
 ::bs_hook::Il2CppWrapperType Newtonsoft::Json::Serialization::JsonSerializerInternalReader::EnsureType(Newtonsoft::Json::JsonReader reader, ::bs_hook::Il2CppWrapperType value, System::Globalization::CultureInfo culture, Newtonsoft::Json::Serialization::JsonContract contract, System::Type targetType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "EnsureType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, reader, value, culture, contract, targetType);
}
 bool Newtonsoft::Json::Serialization::JsonSerializerInternalReader::SetPropertyValue(Newtonsoft::Json::Serialization::JsonProperty property, Newtonsoft::Json::JsonConverter propertyConverter, Newtonsoft::Json::Serialization::JsonContainerContract containerContract, Newtonsoft::Json::Serialization::JsonProperty containerProperty, Newtonsoft::Json::JsonReader reader, ::bs_hook::Il2CppWrapperType target)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "SetPropertyValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonConverter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonContainerContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, property, propertyConverter, containerContract, containerProperty, reader, target);
}
 bool Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CalculatePropertyDetails(Newtonsoft::Json::Serialization::JsonProperty property, ByRef<Newtonsoft::Json::JsonConverter> propertyConverter, Newtonsoft::Json::Serialization::JsonContainerContract containerContract, Newtonsoft::Json::Serialization::JsonProperty containerProperty, Newtonsoft::Json::JsonReader reader, ::bs_hook::Il2CppWrapperType target, ByRef<bool> useExistingValue, ByRef<::bs_hook::Il2CppWrapperType> currentValue, ByRef<Newtonsoft::Json::Serialization::JsonContract> propertyContract, ByRef<bool> gottenCurrentValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "CalculatePropertyDetails",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Newtonsoft::Json::JsonConverter>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonContainerContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Newtonsoft::Json::Serialization::JsonContract>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, property, propertyConverter, containerContract, containerProperty, reader, target, useExistingValue, currentValue, propertyContract, gottenCurrentValue);
}
 void Newtonsoft::Json::Serialization::JsonSerializerInternalReader::AddReference(Newtonsoft::Json::JsonReader reader, ::StringW id, ::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "AddReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader, id, value);
}
 bool Newtonsoft::Json::Serialization::JsonSerializerInternalReader::HasFlag(Newtonsoft::Json::DefaultValueHandling value, Newtonsoft::Json::DefaultValueHandling flag)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "HasFlag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::DefaultValueHandling>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::DefaultValueHandling>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, value, flag);
}
 bool Newtonsoft::Json::Serialization::JsonSerializerInternalReader::ShouldSetPropertyValue(Newtonsoft::Json::Serialization::JsonProperty property, ::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "ShouldSetPropertyValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, property, value);
}
 System::Collections::IList Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateNewList(Newtonsoft::Json::JsonReader reader, Newtonsoft::Json::Serialization::JsonArrayContract contract, ByRef<bool> createdFromNonDefaultCreator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "CreateNewList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonArrayContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IList, false>(const_cast<void*>(instance), ___internal_method, reader, contract, createdFromNonDefaultCreator);
}
 System::Collections::IDictionary Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateNewDictionary(Newtonsoft::Json::JsonReader reader, Newtonsoft::Json::Serialization::JsonDictionaryContract contract, ByRef<bool> createdFromNonDefaultCreator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "CreateNewDictionary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonDictionaryContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IDictionary, false>(const_cast<void*>(instance), ___internal_method, reader, contract, createdFromNonDefaultCreator);
}
 void Newtonsoft::Json::Serialization::JsonSerializerInternalReader::OnDeserializing(Newtonsoft::Json::JsonReader reader, Newtonsoft::Json::Serialization::JsonContract contract, ::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "OnDeserializing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader, contract, value);
}
 void Newtonsoft::Json::Serialization::JsonSerializerInternalReader::OnDeserialized(Newtonsoft::Json::JsonReader reader, Newtonsoft::Json::Serialization::JsonContract contract, ::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "OnDeserialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader, contract, value);
}
 ::bs_hook::Il2CppWrapperType Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PopulateDictionary(System::Collections::IDictionary dictionary, Newtonsoft::Json::JsonReader reader, Newtonsoft::Json::Serialization::JsonDictionaryContract contract, Newtonsoft::Json::Serialization::JsonProperty containerProperty, ::StringW id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "PopulateDictionary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IDictionary>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonDictionaryContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, dictionary, reader, contract, containerProperty, id);
}
 ::bs_hook::Il2CppWrapperType Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PopulateMultidimensionalArray(System::Collections::IList list, Newtonsoft::Json::JsonReader reader, Newtonsoft::Json::Serialization::JsonArrayContract contract, Newtonsoft::Json::Serialization::JsonProperty containerProperty, ::StringW id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "PopulateMultidimensionalArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonArrayContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, list, reader, contract, containerProperty, id);
}
 void Newtonsoft::Json::Serialization::JsonSerializerInternalReader::ThrowUnexpectedEndException(Newtonsoft::Json::JsonReader reader, Newtonsoft::Json::Serialization::JsonContract contract, ::bs_hook::Il2CppWrapperType currentObject, ::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "ThrowUnexpectedEndException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader, contract, currentObject, message);
}
 ::bs_hook::Il2CppWrapperType Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PopulateList(System::Collections::IList list, Newtonsoft::Json::JsonReader reader, Newtonsoft::Json::Serialization::JsonArrayContract contract, Newtonsoft::Json::Serialization::JsonProperty containerProperty, ::StringW id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "PopulateList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonArrayContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, list, reader, contract, containerProperty, id);
}
 ::bs_hook::Il2CppWrapperType Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateISerializable(Newtonsoft::Json::JsonReader reader, Newtonsoft::Json::Serialization::JsonISerializableContract contract, Newtonsoft::Json::Serialization::JsonProperty member, ::StringW id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "CreateISerializable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonISerializableContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, reader, contract, member, id);
}
 ::bs_hook::Il2CppWrapperType Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateISerializableItem(Newtonsoft::Json::Linq::JToken token, System::Type type, Newtonsoft::Json::Serialization::JsonISerializableContract contract, Newtonsoft::Json::Serialization::JsonProperty member)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "CreateISerializableItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Linq::JToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonISerializableContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, token, type, contract, member);
}
 ::bs_hook::Il2CppWrapperType Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateObjectUsingCreatorWithParameters(Newtonsoft::Json::JsonReader reader, Newtonsoft::Json::Serialization::JsonObjectContract contract, Newtonsoft::Json::Serialization::JsonProperty containerProperty, Newtonsoft::Json::Serialization::ObjectConstructor_1<::bs_hook::Il2CppWrapperType> creator, ::StringW id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "CreateObjectUsingCreatorWithParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonObjectContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::ObjectConstructor_1<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, reader, contract, containerProperty, creator, id);
}
 ::bs_hook::Il2CppWrapperType Newtonsoft::Json::Serialization::JsonSerializerInternalReader::DeserializeConvertable(Newtonsoft::Json::JsonConverter converter, Newtonsoft::Json::JsonReader reader, System::Type objectType, ::bs_hook::Il2CppWrapperType existingValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "DeserializeConvertable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonConverter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, converter, reader, objectType, existingValue);
}
 System::Collections::Generic::List_1<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreatorPropertyContext> Newtonsoft::Json::Serialization::JsonSerializerInternalReader::ResolvePropertyAndCreatorValues(Newtonsoft::Json::Serialization::JsonObjectContract contract, Newtonsoft::Json::Serialization::JsonProperty containerProperty, Newtonsoft::Json::JsonReader reader, System::Type objectType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "ResolvePropertyAndCreatorValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonObjectContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreatorPropertyContext>, false>(const_cast<void*>(instance), ___internal_method, contract, containerProperty, reader, objectType);
}
 bool Newtonsoft::Json::Serialization::JsonSerializerInternalReader::ReadForType(Newtonsoft::Json::JsonReader reader, Newtonsoft::Json::Serialization::JsonContract contract, bool hasConverter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "ReadForType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, reader, contract, hasConverter);
}
 ::bs_hook::Il2CppWrapperType Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CreateNewObject(Newtonsoft::Json::JsonReader reader, Newtonsoft::Json::Serialization::JsonObjectContract objectContract, Newtonsoft::Json::Serialization::JsonProperty containerMember, Newtonsoft::Json::Serialization::JsonProperty containerProperty, ::StringW id, ByRef<bool> createdFromNonDefaultCreator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "CreateNewObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonObjectContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, reader, objectContract, containerMember, containerProperty, id, createdFromNonDefaultCreator);
}
 ::bs_hook::Il2CppWrapperType Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PopulateObject(::bs_hook::Il2CppWrapperType newObject, Newtonsoft::Json::JsonReader reader, Newtonsoft::Json::Serialization::JsonObjectContract contract, Newtonsoft::Json::Serialization::JsonProperty member, ::StringW id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "PopulateObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonObjectContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, newObject, reader, contract, member, id);
}
 bool Newtonsoft::Json::Serialization::JsonSerializerInternalReader::ShouldDeserialize(Newtonsoft::Json::JsonReader reader, Newtonsoft::Json::Serialization::JsonProperty property, ::bs_hook::Il2CppWrapperType target)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "ShouldDeserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, reader, property, target);
}
 bool Newtonsoft::Json::Serialization::JsonSerializerInternalReader::CheckPropertyName(Newtonsoft::Json::JsonReader reader, ::StringW memberName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "CheckPropertyName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, reader, memberName);
}
 void Newtonsoft::Json::Serialization::JsonSerializerInternalReader::SetExtensionData(Newtonsoft::Json::Serialization::JsonObjectContract contract, Newtonsoft::Json::Serialization::JsonProperty member, Newtonsoft::Json::JsonReader reader, ::StringW memberName, ::bs_hook::Il2CppWrapperType o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "SetExtensionData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonObjectContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, contract, member, reader, memberName, o);
}
 ::bs_hook::Il2CppWrapperType Newtonsoft::Json::Serialization::JsonSerializerInternalReader::ReadExtensionDataValue(Newtonsoft::Json::Serialization::JsonObjectContract contract, Newtonsoft::Json::Serialization::JsonProperty member, Newtonsoft::Json::JsonReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "ReadExtensionDataValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonObjectContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, contract, member, reader);
}
 void Newtonsoft::Json::Serialization::JsonSerializerInternalReader::EndProcessProperty(::bs_hook::Il2CppWrapperType newObject, Newtonsoft::Json::JsonReader reader, Newtonsoft::Json::Serialization::JsonObjectContract contract, int32_t initialDepth, Newtonsoft::Json::Serialization::JsonProperty property, Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence presence, bool setDefaultValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "EndProcessProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonObjectContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, newObject, reader, contract, initialDepth, property, presence, setDefaultValue);
}
 void Newtonsoft::Json::Serialization::JsonSerializerInternalReader::SetPropertyPresence(Newtonsoft::Json::JsonReader reader, Newtonsoft::Json::Serialization::JsonProperty property, System::Collections::Generic::Dictionary_2<Newtonsoft::Json::Serialization::JsonProperty,Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence> requiredProperties)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "SetPropertyPresence",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<Newtonsoft::Json::Serialization::JsonProperty,Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader, property, requiredProperties);
}
 void Newtonsoft::Json::Serialization::JsonSerializerInternalReader::HandleError(Newtonsoft::Json::JsonReader reader, bool readPastError, int32_t initialDepth)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::JsonSerializerInternalReader>::get(),
                            "HandleError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader, readPastError, initialDepth);
}
