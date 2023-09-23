#pragma once
#include "System/Collections/zzzz__HashHelpers_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConditionalWeakTable_2_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
//  Writing Method size for method: System::Collections::HashHelpers.IsPrime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t)>(&System::Collections::HashHelpers::IsPrime)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x240e800;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::HashHelpers>::get(),
                            "IsPrime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::HashHelpers.GetPrime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&System::Collections::HashHelpers::GetPrime)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x240e8b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::HashHelpers>::get(),
                            "GetPrime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::HashHelpers.ExpandPrime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&System::Collections::HashHelpers::ExpandPrime)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x240ea40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::HashHelpers>::get(),
                            "ExpandPrime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::HashHelpers.get_SerializationInfoTable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::CompilerServices::ConditionalWeakTable_2<::bs_hook::Il2CppWrapperType,System::Runtime::Serialization::SerializationInfo> (*)()>(&System::Collections::HashHelpers::get_SerializationInfoTable)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x240eac4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::HashHelpers>::get(),
                            "get_SerializationInfoTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void System::Collections::HashHelpers::__set_primes(::ArrayW<int32_t> value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "primes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::HashHelpers>::get>(std::forward<::ArrayW<int32_t>>(value));
}
 ::ArrayW<int32_t> System::Collections::HashHelpers::__get_primes()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "primes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::HashHelpers>::get>();
}
 void System::Collections::HashHelpers::__set_s_serializationInfoTable(System::Runtime::CompilerServices::ConditionalWeakTable_2<::bs_hook::Il2CppWrapperType,System::Runtime::Serialization::SerializationInfo> value)  {
::cordl_internals::setStaticField<System::Runtime::CompilerServices::ConditionalWeakTable_2<::bs_hook::Il2CppWrapperType,System::Runtime::Serialization::SerializationInfo>, "s_serializationInfoTable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::HashHelpers>::get>(std::forward<System::Runtime::CompilerServices::ConditionalWeakTable_2<::bs_hook::Il2CppWrapperType,System::Runtime::Serialization::SerializationInfo>>(value));
}
 System::Runtime::CompilerServices::ConditionalWeakTable_2<::bs_hook::Il2CppWrapperType,System::Runtime::Serialization::SerializationInfo> System::Collections::HashHelpers::__get_s_serializationInfoTable()  {
return ::cordl_internals::getStaticField<System::Runtime::CompilerServices::ConditionalWeakTable_2<::bs_hook::Il2CppWrapperType,System::Runtime::Serialization::SerializationInfo>, "s_serializationInfoTable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::HashHelpers>::get>();
}
 bool System::Collections::HashHelpers::IsPrime(int32_t candidate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::HashHelpers>::get(),
                            "IsPrime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, candidate);
}
 int32_t System::Collections::HashHelpers::GetPrime(int32_t min)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::HashHelpers>::get(),
                            "GetPrime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, min);
}
 int32_t System::Collections::HashHelpers::ExpandPrime(int32_t oldSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::HashHelpers>::get(),
                            "ExpandPrime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, oldSize);
}
 System::Runtime::CompilerServices::ConditionalWeakTable_2<::bs_hook::Il2CppWrapperType,System::Runtime::Serialization::SerializationInfo> System::Collections::HashHelpers::get_SerializationInfoTable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::HashHelpers>::get(),
                            "get_SerializationInfoTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::CompilerServices::ConditionalWeakTable_2<::bs_hook::Il2CppWrapperType,System::Runtime::Serialization::SerializationInfo>, false>(nullptr, ___internal_method);
}
