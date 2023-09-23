#pragma once
#include "System/zzzz__IObserver_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: System::IObserver_1.OnNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IObserver_1::*)(T)>(&System::IObserver_1::OnNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IObserver_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IObserver_1>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IObserver_1.OnError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IObserver_1::*)(System::Exception)>(&System::IObserver_1::OnError)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IObserver_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IObserver_1>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IObserver_1.OnCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IObserver_1::*)()>(&System::IObserver_1::OnCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IObserver_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IObserver_1>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
 void System::IObserver_1::OnNext(T value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IObserver_1>::get(),
                            "OnNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void System::IObserver_1::OnError(System::Exception error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IObserver_1>::get(),
                            "OnError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, error);
}
 void System::IObserver_1::OnCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IObserver_1>::get(),
                            "OnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
