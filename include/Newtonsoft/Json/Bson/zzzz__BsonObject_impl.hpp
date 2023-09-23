#pragma once
#include "Newtonsoft/Json/Bson/zzzz__BsonToken_impl.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonObject_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonProperty_def.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonToken_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonType_def.hpp"
//  Writing Method size for method: Newtonsoft::Json::Bson::BsonObject.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Bson::BsonObject::*)(::StringW, Newtonsoft::Json::Bson::BsonToken)>(&Newtonsoft::Json::Bson::BsonObject::Add)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x255004c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonObject>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Bson::BsonToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Bson::BsonObject.get_Type
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Newtonsoft::Json::Bson::BsonType (Newtonsoft::Json::Bson::BsonObject::*)()>(&Newtonsoft::Json::Bson::BsonObject::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25501c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Newtonsoft::Json::Bson::BsonObject),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonObject>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Bson::BsonObject.GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerator_1<Newtonsoft::Json::Bson::BsonProperty> (Newtonsoft::Json::Bson::BsonObject::*)()>(&Newtonsoft::Json::Bson::BsonObject::GetEnumerator)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x254e0fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonObject>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Bson::BsonObject.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator (Newtonsoft::Json::Bson::BsonObject::*)()>(&Newtonsoft::Json::Bson::BsonObject::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x25501cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonObject>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Bson::BsonObject._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Bson::BsonObject::*)()>(&Newtonsoft::Json::Bson::BsonObject::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x25501d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonObject>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<Newtonsoft::Json::Bson::BsonProperty>
constexpr  Newtonsoft::Json::Bson::BsonObject::operator System::Collections::Generic::IEnumerable_1<Newtonsoft::Json::Bson::BsonProperty>() const noexcept {
return System::Collections::Generic::IEnumerable_1<Newtonsoft::Json::Bson::BsonProperty>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  Newtonsoft::Json::Bson::BsonObject::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Newtonsoft::Json::Bson::BsonObject::__set__children(System::Collections::Generic::List_1<Newtonsoft::Json::Bson::BsonProperty> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<Newtonsoft::Json::Bson::BsonProperty>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<Newtonsoft::Json::Bson::BsonProperty>>(value));
}
constexpr System::Collections::Generic::List_1<Newtonsoft::Json::Bson::BsonProperty> Newtonsoft::Json::Bson::BsonObject::__get__children() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<Newtonsoft::Json::Bson::BsonProperty>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void Newtonsoft::Json::Bson::BsonObject::Add(::StringW name, Newtonsoft::Json::Bson::BsonToken token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonObject>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Bson::BsonToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, name, token);
}
 Newtonsoft::Json::Bson::BsonType Newtonsoft::Json::Bson::BsonObject::get_Type()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonObject>::get(),
                            "get_Type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Newtonsoft::Json::Bson::BsonType, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerator_1<Newtonsoft::Json::Bson::BsonProperty> Newtonsoft::Json::Bson::BsonObject::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonObject>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<Newtonsoft::Json::Bson::BsonProperty>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator Newtonsoft::Json::Bson::BsonObject::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonObject>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 Newtonsoft::Json::Bson::BsonObject::BsonObject()  : Newtonsoft::Json::Bson::BsonToken(THROW_UNLESS(::il2cpp_utils::New<BsonObject>())) {}
 void Newtonsoft::Json::Bson::BsonObject::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonObject>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
