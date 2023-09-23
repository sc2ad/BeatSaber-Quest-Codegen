#pragma once
#include "System/Runtime/Remoting/Services/zzzz__ITrackingHandler_def.hpp"
#include "System/Runtime/Remoting/zzzz__ObjRef_def.hpp"
//  Writing Method size for method: System::Runtime::Remoting::Services::ITrackingHandler.DisconnectedObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Services::ITrackingHandler::*)(::bs_hook::Il2CppWrapperType)>(&System::Runtime::Remoting::Services::ITrackingHandler::DisconnectedObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Remoting::Services::ITrackingHandler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Services::ITrackingHandler>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Services::ITrackingHandler.MarshaledObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Services::ITrackingHandler::*)(::bs_hook::Il2CppWrapperType, System::Runtime::Remoting::ObjRef)>(&System::Runtime::Remoting::Services::ITrackingHandler::MarshaledObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Remoting::Services::ITrackingHandler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Services::ITrackingHandler>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Services::ITrackingHandler.UnmarshaledObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Services::ITrackingHandler::*)(::bs_hook::Il2CppWrapperType, System::Runtime::Remoting::ObjRef)>(&System::Runtime::Remoting::Services::ITrackingHandler::UnmarshaledObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Remoting::Services::ITrackingHandler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Services::ITrackingHandler>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
 void System::Runtime::Remoting::Services::ITrackingHandler::DisconnectedObject(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Services::ITrackingHandler>::get(),
                            "DisconnectedObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 void System::Runtime::Remoting::Services::ITrackingHandler::MarshaledObject(::bs_hook::Il2CppWrapperType obj, System::Runtime::Remoting::ObjRef or)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Services::ITrackingHandler>::get(),
                            "MarshaledObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::ObjRef>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obj, or);
}
 void System::Runtime::Remoting::Services::ITrackingHandler::UnmarshaledObject(::bs_hook::Il2CppWrapperType obj, System::Runtime::Remoting::ObjRef or)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Services::ITrackingHandler>::get(),
                            "UnmarshaledObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::ObjRef>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obj, or);
}
