#pragma once
namespace {
#include "System/Runtime/Serialization/zzzz__ISurrogateSelector_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializationSurrogate_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::ISurrogateSelector.GetSurrogate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::ISerializationSurrogate (::System::Runtime::Serialization::ISurrogateSelector::*)(::System::Type, ::System::Runtime::Serialization::StreamingContext, ByRef<::System::Runtime::Serialization::ISurrogateSelector>)>(&::System::Runtime::Serialization::ISurrogateSelector::GetSurrogate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Runtime::Serialization::ISurrogateSelector),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ISurrogateSelector>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 ::System::Runtime::Serialization::ISerializationSurrogate ::System::Runtime::Serialization::ISurrogateSelector::GetSurrogate(::System::Type type, ::System::Runtime::Serialization::StreamingContext context, ByRef<::System::Runtime::Serialization::ISurrogateSelector> selector)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ISurrogateSelector>::get(),
                            "GetSurrogate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Runtime::Serialization::ISurrogateSelector>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::ISerializationSurrogate, false>(const_cast<void*>(instance), ___internal_method, type, context, selector);
}
} // end anonymous namespace
