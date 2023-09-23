#pragma once
#include "System/Collections/Concurrent/zzzz__IProducerConsumerCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
//  Writing Method size for method: System::Collections::Concurrent::IProducerConsumerCollection_1.TryAdd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Concurrent::IProducerConsumerCollection_1::*)(T)>(&System::Collections::Concurrent::IProducerConsumerCollection_1::TryAdd)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::Concurrent::IProducerConsumerCollection_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::IProducerConsumerCollection_1>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::IProducerConsumerCollection_1.TryTake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Concurrent::IProducerConsumerCollection_1::*)(ByRef<T>)>(&System::Collections::Concurrent::IProducerConsumerCollection_1::TryTake)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::Concurrent::IProducerConsumerCollection_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::IProducerConsumerCollection_1>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::IProducerConsumerCollection_1.ToArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<T> (System::Collections::Concurrent::IProducerConsumerCollection_1::*)()>(&System::Collections::Concurrent::IProducerConsumerCollection_1::ToArray)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::Concurrent::IProducerConsumerCollection_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::IProducerConsumerCollection_1>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<T>
constexpr  System::Collections::Concurrent::IProducerConsumerCollection_1::operator System::Collections::Generic::IEnumerable_1<T>() const noexcept {
return System::Collections::Generic::IEnumerable_1<T>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  System::Collections::Concurrent::IProducerConsumerCollection_1::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::ICollection
constexpr  System::Collections::Concurrent::IProducerConsumerCollection_1::operator System::Collections::ICollection() const noexcept {
return System::Collections::ICollection(::bs_hook::Il2CppWrapperType::instance);
}
 bool System::Collections::Concurrent::IProducerConsumerCollection_1::TryAdd(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::IProducerConsumerCollection_1>::get(),
                            "TryAdd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, item);
}
 bool System::Collections::Concurrent::IProducerConsumerCollection_1::TryTake(ByRef<T> item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::IProducerConsumerCollection_1>::get(),
                            "TryTake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, item);
}
 ::ArrayW<T> System::Collections::Concurrent::IProducerConsumerCollection_1::ToArray()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::IProducerConsumerCollection_1>::get(),
                            "ToArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>, false>(const_cast<void*>(instance), ___internal_method);
}
