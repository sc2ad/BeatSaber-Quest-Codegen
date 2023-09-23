#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentQueue_1_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/Concurrent/zzzz__IProducerConsumerCollection_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/Concurrent/zzzz__PaddedHeadAndTail_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
// Ctor Parameters [CppParam { name: "Item", ty: "T", modifiers: "", def_value: Some("csnull") }, CppParam { name: "SequenceNumber", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::System__Collections__Concurrent__ConcurrentQueue_1__Segment__Slot::System__Collections__Concurrent__ConcurrentQueue_1__Segment__Slot(T Item, int32_t SequenceNumber) noexcept : ::bs_hook::ValueTypeWrapper() {this->Item = Item;
this->SequenceNumber = SequenceNumber;
}
constexpr void GlobalNamespace::System__Collections__Concurrent__ConcurrentQueue_1__Segment__Slot::__set_Item(T value)  {
::cordl_internals::setInstanceField<T, 0x0>(this->__instance, std::forward<T>(value));
}
constexpr T GlobalNamespace::System__Collections__Concurrent__ConcurrentQueue_1__Segment__Slot::__get_Item() const {
return ::cordl_internals::getInstanceField<T, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::System__Collections__Concurrent__ConcurrentQueue_1__Segment__Slot::__set_SequenceNumber(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::System__Collections__Concurrent__ConcurrentQueue_1__Segment__Slot::__get_SequenceNumber() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
//  Writing Method size for method: System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment::*)(int32_t)>(&System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment.get_Capacity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment::*)()>(&System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment::get_Capacity)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment>::get(),
                            "get_Capacity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment.get_FreezeOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment::*)()>(&System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment::get_FreezeOffset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment>::get(),
                            "get_FreezeOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment.EnsureFrozenForEnqueues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment::*)()>(&System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment::EnsureFrozenForEnqueues)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment>::get(),
                            "EnsureFrozenForEnqueues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment.TryDequeue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment::*)(ByRef<T>)>(&System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment::TryDequeue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment>::get(),
                            "TryDequeue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment.TryEnqueue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment::*)(T)>(&System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment::TryEnqueue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment>::get(),
                            "TryEnqueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment::__set__slots(::ArrayW<GlobalNamespace::System__Collections__Concurrent__ConcurrentQueue_1__Segment__Slot<T>> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::System__Collections__Concurrent__ConcurrentQueue_1__Segment__Slot<T>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::System__Collections__Concurrent__ConcurrentQueue_1__Segment__Slot<T>>>(value));
}
constexpr ::ArrayW<GlobalNamespace::System__Collections__Concurrent__ConcurrentQueue_1__Segment__Slot<T>> System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment::__get__slots() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::System__Collections__Concurrent__ConcurrentQueue_1__Segment__Slot<T>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment::__set__slotsMask(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment::__get__slotsMask() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment::__set__headAndTail(System::Collections::Concurrent::PaddedHeadAndTail value)  {
::cordl_internals::setInstanceField<System::Collections::Concurrent::PaddedHeadAndTail, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Concurrent::PaddedHeadAndTail>(value));
}
constexpr System::Collections::Concurrent::PaddedHeadAndTail System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment::__get__headAndTail() const {
return ::cordl_internals::getInstanceField<System::Collections::Concurrent::PaddedHeadAndTail, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment::__set__preservedForObservation(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment::__get__preservedForObservation() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment::__set__frozenForEnqueues(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment::__get__frozenForEnqueues() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment::__set__nextSegment(System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> value)  {
::cordl_internals::setInstanceField<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>>(value));
}
constexpr System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment::__get__nextSegment() const {
return ::cordl_internals::getInstanceField<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "boundedLength", ty: "int32_t", modifiers: "", def_value: None }]
 System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment::System__Collections__Concurrent__ConcurrentQueue_1__Segment(int32_t boundedLength)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<System__Collections__Concurrent__ConcurrentQueue_1__Segment>(boundedLength))) {}
 void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment::_ctor(int32_t boundedLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, boundedLength);
}
 int32_t System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment::get_Capacity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment>::get(),
                            "get_Capacity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment::get_FreezeOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment>::get(),
                            "get_FreezeOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment::EnsureFrozenForEnqueues()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment>::get(),
                            "EnsureFrozenForEnqueues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment::TryDequeue(ByRef<T> item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment>::get(),
                            "TryDequeue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, item);
}
 bool System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment::TryEnqueue(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment>::get(),
                            "TryEnqueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, item);
}
//  Writing Method size for method: System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28::*)(int32_t)>(&System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28::*)()>(&System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28::*)()>(&System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28::MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28.System_Collections_Generic_IEnumerator_T__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<T (System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28::*)()>(&System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28::System_Collections_Generic_IEnumerator_T__get_Current)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28>::get(),
                            "System.Collections.Generic.IEnumerator<T>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28::*)()>(&System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28::*)()>(&System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<T>
constexpr  System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28::operator System::Collections::Generic::IEnumerator_1<T>() const noexcept {
return System::Collections::Generic::IEnumerator_1<T>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28::__set___2__current(T value)  {
::cordl_internals::setInstanceField<T, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T>(value));
}
constexpr T System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28::__get___2__current() const {
return ::cordl_internals::getInstanceField<T, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28::__set_head(System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> value)  {
::cordl_internals::setInstanceField<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>>(value));
}
constexpr System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28::__get_head() const {
return ::cordl_internals::getInstanceField<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28::__set_tail(System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> value)  {
::cordl_internals::setInstanceField<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>>(value));
}
constexpr System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28::__get_tail() const {
return ::cordl_internals::getInstanceField<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28::__set_tailTail(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28::__get_tailTail() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28::__set_headHead(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28::__get_headHead() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28::__set___4__this(System::Collections::Concurrent::ConcurrentQueue_1<T> value)  {
::cordl_internals::setInstanceField<System::Collections::Concurrent::ConcurrentQueue_1<T>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Concurrent::ConcurrentQueue_1<T>>(value));
}
constexpr System::Collections::Concurrent::ConcurrentQueue_1<T> System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28::__get___4__this() const {
return ::cordl_internals::getInstanceField<System::Collections::Concurrent::ConcurrentQueue_1<T>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28::__set__headTail_5__2(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28::__get__headTail_5__2() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28::__set__i_5__3(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28::__get__i_5__3() const {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28::__set__s_5__4(System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> value)  {
::cordl_internals::setInstanceField<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>>(value));
}
constexpr System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28::__get__s_5__4() const {
return ::cordl_internals::getInstanceField<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28::__set__i_5__5(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28::__get__i_5__5() const {
return ::cordl_internals::getInstanceField<int32_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
 System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28(int32_t __1__state)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28>(__1__state))) {}
 void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 T System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28::System_Collections_Generic_IEnumerator_T__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28>::get(),
                            "System.Collections.Generic.IEnumerator<T>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentQueue_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Concurrent::ConcurrentQueue_1::*)()>(&System::Collections::Concurrent::ConcurrentQueue_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentQueue_1.System_Collections_ICollection_CopyTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Concurrent::ConcurrentQueue_1::*)(System::Array, int32_t)>(&System::Collections::Concurrent::ConcurrentQueue_1::System_Collections_ICollection_CopyTo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1>::get(),
                            "System.Collections.ICollection.CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Array>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentQueue_1.System_Collections_ICollection_get_IsSynchronized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Concurrent::ConcurrentQueue_1::*)()>(&System::Collections::Concurrent::ConcurrentQueue_1::System_Collections_ICollection_get_IsSynchronized)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1>::get(),
                            "System.Collections.ICollection.get_IsSynchronized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentQueue_1.System_Collections_ICollection_get_SyncRoot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Collections::Concurrent::ConcurrentQueue_1::*)()>(&System::Collections::Concurrent::ConcurrentQueue_1::System_Collections_ICollection_get_SyncRoot)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1>::get(),
                            "System.Collections.ICollection.get_SyncRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentQueue_1.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator (System::Collections::Concurrent::ConcurrentQueue_1::*)()>(&System::Collections::Concurrent::ConcurrentQueue_1::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentQueue_1.System_Collections_Concurrent_IProducerConsumerCollection_T__TryAdd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Concurrent::ConcurrentQueue_1::*)(T)>(&System::Collections::Concurrent::ConcurrentQueue_1::System_Collections_Concurrent_IProducerConsumerCollection_T__TryAdd)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1>::get(),
                            "System.Collections.Concurrent.IProducerConsumerCollection<T>.TryAdd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentQueue_1.System_Collections_Concurrent_IProducerConsumerCollection_T__TryTake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Concurrent::ConcurrentQueue_1::*)(ByRef<T>)>(&System::Collections::Concurrent::ConcurrentQueue_1::System_Collections_Concurrent_IProducerConsumerCollection_T__TryTake)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1>::get(),
                            "System.Collections.Concurrent.IProducerConsumerCollection<T>.TryTake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentQueue_1.ToArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<T> (System::Collections::Concurrent::ConcurrentQueue_1::*)()>(&System::Collections::Concurrent::ConcurrentQueue_1::ToArray)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1>::get(),
                            "ToArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentQueue_1.get_Count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Collections::Concurrent::ConcurrentQueue_1::*)()>(&System::Collections::Concurrent::ConcurrentQueue_1::get_Count)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentQueue_1.GetCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>, int32_t, int32_t)>(&System::Collections::Concurrent::ConcurrentQueue_1::GetCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1>::get(),
                            "GetCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentQueue_1.GetCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>, int32_t, System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>, int32_t)>(&System::Collections::Concurrent::ConcurrentQueue_1::GetCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1>::get(),
                            "GetCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentQueue_1.CopyTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Concurrent::ConcurrentQueue_1::*)(::ArrayW<T>, int32_t)>(&System::Collections::Concurrent::ConcurrentQueue_1::CopyTo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1>::get(),
                            "CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentQueue_1.GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerator_1<T> (System::Collections::Concurrent::ConcurrentQueue_1::*)()>(&System::Collections::Concurrent::ConcurrentQueue_1::GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentQueue_1.SnapForObservation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Concurrent::ConcurrentQueue_1::*)(ByRef<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>>, ByRef<int32_t>, ByRef<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>>, ByRef<int32_t>)>(&System::Collections::Concurrent::ConcurrentQueue_1::SnapForObservation)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1>::get(),
                            "SnapForObservation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentQueue_1.GetItemWhenAvailable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<T (System::Collections::Concurrent::ConcurrentQueue_1::*)(System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>, int32_t)>(&System::Collections::Concurrent::ConcurrentQueue_1::GetItemWhenAvailable)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1>::get(),
                            "GetItemWhenAvailable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentQueue_1.Enumerate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerator_1<T> (System::Collections::Concurrent::ConcurrentQueue_1::*)(System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>, int32_t, System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>, int32_t)>(&System::Collections::Concurrent::ConcurrentQueue_1::Enumerate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1>::get(),
                            "Enumerate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentQueue_1.Enqueue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Concurrent::ConcurrentQueue_1::*)(T)>(&System::Collections::Concurrent::ConcurrentQueue_1::Enqueue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1>::get(),
                            "Enqueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentQueue_1.EnqueueSlow
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Concurrent::ConcurrentQueue_1::*)(T)>(&System::Collections::Concurrent::ConcurrentQueue_1::EnqueueSlow)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1>::get(),
                            "EnqueueSlow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentQueue_1.TryDequeue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Concurrent::ConcurrentQueue_1::*)(ByRef<T>)>(&System::Collections::Concurrent::ConcurrentQueue_1::TryDequeue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1>::get(),
                            "TryDequeue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentQueue_1.TryDequeueSlow
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Concurrent::ConcurrentQueue_1::*)(ByRef<T>)>(&System::Collections::Concurrent::ConcurrentQueue_1::TryDequeueSlow)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1>::get(),
                            "TryDequeueSlow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Concurrent::IProducerConsumerCollection_1<T>
constexpr  System::Collections::Concurrent::ConcurrentQueue_1::operator System::Collections::Concurrent::IProducerConsumerCollection_1<T>() const noexcept {
return System::Collections::Concurrent::IProducerConsumerCollection_1<T>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<T>
constexpr  System::Collections::Concurrent::ConcurrentQueue_1::operator System::Collections::Generic::IEnumerable_1<T>() const noexcept {
return System::Collections::Generic::IEnumerable_1<T>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  System::Collections::Concurrent::ConcurrentQueue_1::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::ICollection
constexpr  System::Collections::Concurrent::ConcurrentQueue_1::operator System::Collections::ICollection() const noexcept {
return System::Collections::ICollection(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::Generic::IReadOnlyCollection_1<T>
constexpr  System::Collections::Concurrent::ConcurrentQueue_1::operator System::Collections::Generic::IReadOnlyCollection_1<T>() const noexcept {
return System::Collections::Generic::IReadOnlyCollection_1<T>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::ConcurrentQueue_1::__set__crossSegmentLock(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::Collections::Concurrent::ConcurrentQueue_1::__get__crossSegmentLock() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::ConcurrentQueue_1::__set__tail(System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> value)  {
::cordl_internals::setInstanceField<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>>(value));
}
constexpr System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> System::Collections::Concurrent::ConcurrentQueue_1::__get__tail() const {
return ::cordl_internals::getInstanceField<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::ConcurrentQueue_1::__set__head(System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> value)  {
::cordl_internals::setInstanceField<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>>(value));
}
constexpr System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> System::Collections::Concurrent::ConcurrentQueue_1::__get__head() const {
return ::cordl_internals::getInstanceField<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 System::Collections::Concurrent::ConcurrentQueue_1::ConcurrentQueue_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ConcurrentQueue_1>())) {}
 void System::Collections::Concurrent::ConcurrentQueue_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Concurrent::ConcurrentQueue_1::System_Collections_ICollection_CopyTo(System::Array array, int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1>::get(),
                            "System.Collections.ICollection.CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Array>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array, index);
}
 bool System::Collections::Concurrent::ConcurrentQueue_1::System_Collections_ICollection_get_IsSynchronized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1>::get(),
                            "System.Collections.ICollection.get_IsSynchronized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType System::Collections::Concurrent::ConcurrentQueue_1::System_Collections_ICollection_get_SyncRoot()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1>::get(),
                            "System.Collections.ICollection.get_SyncRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator System::Collections::Concurrent::ConcurrentQueue_1::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Collections::Concurrent::ConcurrentQueue_1::System_Collections_Concurrent_IProducerConsumerCollection_T__TryAdd(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1>::get(),
                            "System.Collections.Concurrent.IProducerConsumerCollection<T>.TryAdd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, item);
}
 bool System::Collections::Concurrent::ConcurrentQueue_1::System_Collections_Concurrent_IProducerConsumerCollection_T__TryTake(ByRef<T> item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1>::get(),
                            "System.Collections.Concurrent.IProducerConsumerCollection<T>.TryTake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, item);
}
 ::ArrayW<T> System::Collections::Concurrent::ConcurrentQueue_1::ToArray()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1>::get(),
                            "ToArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Collections::Concurrent::ConcurrentQueue_1::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Collections::Concurrent::ConcurrentQueue_1::GetCount(System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> s, int32_t head, int32_t tail)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1>::get(),
                            "GetCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, s, head, tail);
}
 int64_t System::Collections::Concurrent::ConcurrentQueue_1::GetCount(System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> head, int32_t headHead, System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> tail, int32_t tailTail)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1>::get(),
                            "GetCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, head, headHead, tail, tailTail);
}
 void System::Collections::Concurrent::ConcurrentQueue_1::CopyTo(::ArrayW<T> array, int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1>::get(),
                            "CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array, index);
}
 System::Collections::Generic::IEnumerator_1<T> System::Collections::Concurrent::ConcurrentQueue_1::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Concurrent::ConcurrentQueue_1::SnapForObservation(ByRef<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>> head, ByRef<int32_t> headHead, ByRef<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>> tail, ByRef<int32_t> tailTail)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1>::get(),
                            "SnapForObservation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, head, headHead, tail, tailTail);
}
 T System::Collections::Concurrent::ConcurrentQueue_1::GetItemWhenAvailable(System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> segment, int32_t i)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1>::get(),
                            "GetItemWhenAvailable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method, segment, i);
}
 System::Collections::Generic::IEnumerator_1<T> System::Collections::Concurrent::ConcurrentQueue_1::Enumerate(System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> head, int32_t headHead, System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> tail, int32_t tailTail)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1>::get(),
                            "Enumerate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<T>, false>(const_cast<void*>(instance), ___internal_method, head, headHead, tail, tailTail);
}
 void System::Collections::Concurrent::ConcurrentQueue_1::Enqueue(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1>::get(),
                            "Enqueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, item);
}
 void System::Collections::Concurrent::ConcurrentQueue_1::EnqueueSlow(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1>::get(),
                            "EnqueueSlow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, item);
}
 bool System::Collections::Concurrent::ConcurrentQueue_1::TryDequeue(ByRef<T> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1>::get(),
                            "TryDequeue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, result);
}
 bool System::Collections::Concurrent::ConcurrentQueue_1::TryDequeueSlow(ByRef<T> item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1>::get(),
                            "TryDequeueSlow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, item);
}
