#pragma once
#include "System/Runtime/Serialization/zzzz__IFormatter_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISurrogateSelector_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: System::Runtime::Serialization::IFormatter.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::IFormatter::*)(System::IO::Stream, ::bs_hook::Il2CppWrapperType)>(&System::Runtime::Serialization::IFormatter::Serialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Serialization::IFormatter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::IFormatter>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::IFormatter.set_SurrogateSelector
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::IFormatter::*)(System::Runtime::Serialization::ISurrogateSelector)>(&System::Runtime::Serialization::IFormatter::set_SurrogateSelector)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Serialization::IFormatter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::IFormatter>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
 void System::Runtime::Serialization::IFormatter::Serialize(System::IO::Stream serializationStream, ::bs_hook::Il2CppWrapperType graph)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::IFormatter>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, serializationStream, graph);
}
 void System::Runtime::Serialization::IFormatter::set_SurrogateSelector(System::Runtime::Serialization::ISurrogateSelector value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::IFormatter>::get(),
                            "set_SurrogateSelector",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::ISurrogateSelector>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
