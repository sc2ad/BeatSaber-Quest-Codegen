#pragma once
namespace {
#include "System/Runtime/Serialization/zzzz__ObjectIDGenerator_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectIDGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ObjectIDGenerator::*)()>(&::System::Runtime::Serialization::ObjectIDGenerator::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x234c2a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectIDGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectIDGenerator.FindElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Runtime::Serialization::ObjectIDGenerator::*)(::bs_hook::Il2CppWrapperType, ByRef<bool>)>(&::System::Runtime::Serialization::ObjectIDGenerator::FindElement)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x234c380;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectIDGenerator>::get(),
                            "FindElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectIDGenerator.GetId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Runtime::Serialization::ObjectIDGenerator::*)(::bs_hook::Il2CppWrapperType, ByRef<bool>)>(&::System::Runtime::Serialization::ObjectIDGenerator::GetId)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x234c444;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Runtime::Serialization::ObjectIDGenerator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectIDGenerator>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectIDGenerator.HasId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Runtime::Serialization::ObjectIDGenerator::*)(::bs_hook::Il2CppWrapperType, ByRef<bool>)>(&::System::Runtime::Serialization::ObjectIDGenerator::HasId)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x234c87c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Runtime::Serialization::ObjectIDGenerator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectIDGenerator>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectIDGenerator.Rehash
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ObjectIDGenerator::*)()>(&::System::Runtime::Serialization::ObjectIDGenerator::Rehash)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x234c5c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectIDGenerator>::get(),
                            "Rehash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Runtime::Serialization::ObjectIDGenerator::__set_m_currentCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Runtime::Serialization::ObjectIDGenerator::__get_m_currentCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Serialization::ObjectIDGenerator::__set_m_currentSize(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Runtime::Serialization::ObjectIDGenerator::__get_m_currentSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Serialization::ObjectIDGenerator::__set_m_ids(::ArrayW<int64_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int64_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int64_t>>(value));
}
constexpr ::ArrayW<int64_t> ::System::Runtime::Serialization::ObjectIDGenerator::__get_m_ids() const {
return ::cordl_internals::getInstanceField<::ArrayW<int64_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Serialization::ObjectIDGenerator::__set_m_objs(::ArrayW<::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setInstanceField<::ArrayW<::bs_hook::Il2CppWrapperType>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::bs_hook::Il2CppWrapperType>>(value));
}
constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> ::System::Runtime::Serialization::ObjectIDGenerator::__get_m_objs() const {
return ::cordl_internals::getInstanceField<::ArrayW<::bs_hook::Il2CppWrapperType>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::System::Runtime::Serialization::ObjectIDGenerator::__set_sizes(::ArrayW<int32_t> value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "sizes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectIDGenerator>::get>(std::forward<::ArrayW<int32_t>>(value));
}
 ::ArrayW<int32_t> ::System::Runtime::Serialization::ObjectIDGenerator::__get_sizes()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "sizes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectIDGenerator>::get>();
}
// Ctor Parameters []
 ::System::Runtime::Serialization::ObjectIDGenerator::ObjectIDGenerator()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ObjectIDGenerator>())) {}
 void ::System::Runtime::Serialization::ObjectIDGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectIDGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::System::Runtime::Serialization::ObjectIDGenerator::FindElement(::bs_hook::Il2CppWrapperType obj, ByRef<bool> found)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectIDGenerator>::get(),
                            "FindElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, obj, found);
}
 int64_t ::System::Runtime::Serialization::ObjectIDGenerator::GetId(::bs_hook::Il2CppWrapperType obj, ByRef<bool> firstTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectIDGenerator>::get(),
                            "GetId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method, obj, firstTime);
}
 int64_t ::System::Runtime::Serialization::ObjectIDGenerator::HasId(::bs_hook::Il2CppWrapperType obj, ByRef<bool> firstTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectIDGenerator>::get(),
                            "HasId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method, obj, firstTime);
}
 void ::System::Runtime::Serialization::ObjectIDGenerator::Rehash()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectIDGenerator>::get(),
                            "Rehash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
