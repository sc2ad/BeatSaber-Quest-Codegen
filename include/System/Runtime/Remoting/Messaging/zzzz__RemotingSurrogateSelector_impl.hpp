#pragma once
#include "System/Runtime/Remoting/Messaging/zzzz__RemotingSurrogateSelector_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__RemotingSurrogate_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializationSurrogate_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISurrogateSelector_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__ObjRefSurrogate_def.hpp"
//  Writing Method size for method: System::Runtime::Remoting::Messaging::RemotingSurrogateSelector._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::*)()>(&System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2337d78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::RemotingSurrogateSelector>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Messaging::RemotingSurrogateSelector.GetSurrogate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Serialization::ISerializationSurrogate (System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::*)(System::Type, System::Runtime::Serialization::StreamingContext, ByRef<System::Runtime::Serialization::ISurrogateSelector>)>(&System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::GetSurrogate)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x2345aa8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Remoting::Messaging::RemotingSurrogateSelector),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::RemotingSurrogateSelector>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::Serialization::ISurrogateSelector
constexpr  System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::operator System::Runtime::Serialization::ISurrogateSelector() const noexcept {
return System::Runtime::Serialization::ISurrogateSelector(::bs_hook::Il2CppWrapperType::instance);
}
 void System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::__set_s_cachedTypeObjRef(System::Type value)  {
::cordl_internals::setStaticField<System::Type, "s_cachedTypeObjRef", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::RemotingSurrogateSelector>::get>(std::forward<System::Type>(value));
}
 System::Type System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::__get_s_cachedTypeObjRef()  {
return ::cordl_internals::getStaticField<System::Type, "s_cachedTypeObjRef", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::RemotingSurrogateSelector>::get>();
}
 void System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::__set__objRefSurrogate(System::Runtime::Remoting::Messaging::ObjRefSurrogate value)  {
::cordl_internals::setStaticField<System::Runtime::Remoting::Messaging::ObjRefSurrogate, "_objRefSurrogate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::RemotingSurrogateSelector>::get>(std::forward<System::Runtime::Remoting::Messaging::ObjRefSurrogate>(value));
}
 System::Runtime::Remoting::Messaging::ObjRefSurrogate System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::__get__objRefSurrogate()  {
return ::cordl_internals::getStaticField<System::Runtime::Remoting::Messaging::ObjRefSurrogate, "_objRefSurrogate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::RemotingSurrogateSelector>::get>();
}
 void System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::__set__objRemotingSurrogate(System::Runtime::Remoting::Messaging::RemotingSurrogate value)  {
::cordl_internals::setStaticField<System::Runtime::Remoting::Messaging::RemotingSurrogate, "_objRemotingSurrogate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::RemotingSurrogateSelector>::get>(std::forward<System::Runtime::Remoting::Messaging::RemotingSurrogate>(value));
}
 System::Runtime::Remoting::Messaging::RemotingSurrogate System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::__get__objRemotingSurrogate()  {
return ::cordl_internals::getStaticField<System::Runtime::Remoting::Messaging::RemotingSurrogate, "_objRemotingSurrogate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::RemotingSurrogateSelector>::get>();
}
constexpr void System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::__set__next(System::Runtime::Serialization::ISurrogateSelector value)  {
::cordl_internals::setInstanceField<System::Runtime::Serialization::ISurrogateSelector, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Serialization::ISurrogateSelector>(value));
}
constexpr System::Runtime::Serialization::ISurrogateSelector System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::__get__next() const {
return ::cordl_internals::getInstanceField<System::Runtime::Serialization::ISurrogateSelector, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Runtime::Remoting::Messaging::RemotingSurrogateSelector System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::New_ctor()  {
System::Runtime::Remoting::Messaging::RemotingSurrogateSelector o{THROW_UNLESS(::il2cpp_utils::New<System::Runtime::Remoting::Messaging::RemotingSurrogateSelector>())};
return o;
}
 void System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::RemotingSurrogateSelector>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Runtime::Serialization::ISerializationSurrogate System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::GetSurrogate(System::Type type, System::Runtime::Serialization::StreamingContext context, ByRef<System::Runtime::Serialization::ISurrogateSelector> ssout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::RemotingSurrogateSelector>::get(),
                            "GetSurrogate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Runtime::Serialization::ISurrogateSelector>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Serialization::ISerializationSurrogate, false>(const_cast<void*>(instance), ___internal_method, type, context, ssout);
}
