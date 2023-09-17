#pragma once
namespace {
#include "System/Runtime/Serialization/zzzz__ISafeSerializationData_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::ISafeSerializationData.CompleteDeserialization
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ISafeSerializationData::*)(::bs_hook::Il2CppWrapperType)>(&::System::Runtime::Serialization::ISafeSerializationData::CompleteDeserialization)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Runtime::Serialization::ISafeSerializationData),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ISafeSerializationData>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 void ::System::Runtime::Serialization::ISafeSerializationData::CompleteDeserialization(::bs_hook::Il2CppWrapperType deserialized)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ISafeSerializationData>::get(),
                            "CompleteDeserialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, deserialized);
}
} // end anonymous namespace
