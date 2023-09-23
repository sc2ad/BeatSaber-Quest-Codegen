#pragma once
#include "System/Runtime/Remoting/Services/zzzz__TrackingServices_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Runtime/Remoting/zzzz__ObjRef_def.hpp"
//  Writing Method size for method: System::Runtime::Remoting::Services::TrackingServices.NotifyMarshaledObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::bs_hook::Il2CppWrapperType, System::Runtime::Remoting::ObjRef)>(&System::Runtime::Remoting::Services::TrackingServices::NotifyMarshaledObject)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x2329ac4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Services::TrackingServices>::get(),
                            "NotifyMarshaledObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::ObjRef>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Services::TrackingServices.NotifyUnmarshaledObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::bs_hook::Il2CppWrapperType, System::Runtime::Remoting::ObjRef)>(&System::Runtime::Remoting::Services::TrackingServices::NotifyUnmarshaledObject)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x2329dd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Services::TrackingServices>::get(),
                            "NotifyUnmarshaledObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::ObjRef>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Services::TrackingServices.NotifyDisconnectedObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::bs_hook::Il2CppWrapperType)>(&System::Runtime::Remoting::Services::TrackingServices::NotifyDisconnectedObject)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x2327220;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Services::TrackingServices>::get(),
                            "NotifyDisconnectedObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
 void System::Runtime::Remoting::Services::TrackingServices::__set__handlers(System::Collections::ArrayList value)  {
::cordl_internals::setStaticField<System::Collections::ArrayList, "_handlers", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Services::TrackingServices>::get>(std::forward<System::Collections::ArrayList>(value));
}
 System::Collections::ArrayList System::Runtime::Remoting::Services::TrackingServices::__get__handlers()  {
return ::cordl_internals::getStaticField<System::Collections::ArrayList, "_handlers", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Services::TrackingServices>::get>();
}
 void System::Runtime::Remoting::Services::TrackingServices::NotifyMarshaledObject(::bs_hook::Il2CppWrapperType obj, System::Runtime::Remoting::ObjRef or)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Services::TrackingServices>::get(),
                            "NotifyMarshaledObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::ObjRef>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, obj, or);
}
 void System::Runtime::Remoting::Services::TrackingServices::NotifyUnmarshaledObject(::bs_hook::Il2CppWrapperType obj, System::Runtime::Remoting::ObjRef or)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Services::TrackingServices>::get(),
                            "NotifyUnmarshaledObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::ObjRef>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, obj, or);
}
 void System::Runtime::Remoting::Services::TrackingServices::NotifyDisconnectedObject(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Services::TrackingServices>::get(),
                            "NotifyDisconnectedObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, obj);
}
