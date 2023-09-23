#pragma once
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
//  Writing Method size for method: System::Runtime::Remoting::Messaging::IMessage.get_Properties
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IDictionary (System::Runtime::Remoting::Messaging::IMessage::*)()>(&System::Runtime::Remoting::Messaging::IMessage::get_Properties)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Remoting::Messaging::IMessage),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::IMessage>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 System::Collections::IDictionary System::Runtime::Remoting::Messaging::IMessage::get_Properties()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::IMessage>::get(),
                            "get_Properties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IDictionary, false>(const_cast<void*>(instance), ___internal_method);
}
