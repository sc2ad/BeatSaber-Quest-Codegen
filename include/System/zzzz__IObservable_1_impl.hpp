#pragma once
namespace {
#include "System/zzzz__IObservable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IObserver_1_def.hpp"
//  Writing Method size for method: ::System::IObservable_1.Subscribe
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IDisposable (::System::IObservable_1::*)(::System::IObserver_1<T>)>(&::System::IObservable_1::Subscribe)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::IObservable_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IObservable_1>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 ::System::IDisposable ::System::IObservable_1::Subscribe(::System::IObserver_1<T> observer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IObservable_1>::get(),
                            "Subscribe",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IObserver_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IDisposable, false>(const_cast<void*>(instance), ___internal_method, observer);
}
} // end anonymous namespace
