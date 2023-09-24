#pragma once
#include "System/Collections/Generic/zzzz__ArraySortHelper_2_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
 void System::Collections::Generic::ArraySortHelper_2<TKey,TValue>::__set_s_defaultArraySortHelper(System::Collections::Generic::ArraySortHelper_2<TKey,TValue> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::ArraySortHelper_2<TKey,TValue>, "s_defaultArraySortHelper", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::ArraySortHelper_2<TKey,TValue>>::get>(std::forward<System::Collections::Generic::ArraySortHelper_2<TKey,TValue>>(value));
}
 System::Collections::Generic::ArraySortHelper_2<TKey,TValue> System::Collections::Generic::ArraySortHelper_2<TKey,TValue>::__get_s_defaultArraySortHelper()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::ArraySortHelper_2<TKey,TValue>, "s_defaultArraySortHelper", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::ArraySortHelper_2<TKey,TValue>>::get>();
}
 void System::Collections::Generic::ArraySortHelper_2<TKey,TValue>::Sort(::ArrayW<TKey> keys, ::ArrayW<TValue> values, int32_t index, int32_t length, System::Collections::Generic::IComparer_1<TKey> comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::ArraySortHelper_2<TKey,TValue>>::get(),
                            "Sort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IComparer_1<TKey>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, keys, values, index, length, comparer);
}
 void System::Collections::Generic::ArraySortHelper_2<TKey,TValue>::SwapIfGreaterWithItems(::ArrayW<TKey> keys, ::ArrayW<TValue> values, System::Collections::Generic::IComparer_1<TKey> comparer, int32_t a, int32_t b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::ArraySortHelper_2<TKey,TValue>>::get(),
                            "SwapIfGreaterWithItems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IComparer_1<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, keys, values, comparer, a, b);
}
 void System::Collections::Generic::ArraySortHelper_2<TKey,TValue>::Swap(::ArrayW<TKey> keys, ::ArrayW<TValue> values, int32_t i, int32_t j)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::ArraySortHelper_2<TKey,TValue>>::get(),
                            "Swap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, keys, values, i, j);
}
 void System::Collections::Generic::ArraySortHelper_2<TKey,TValue>::IntrospectiveSort(::ArrayW<TKey> keys, ::ArrayW<TValue> values, int32_t left, int32_t length, System::Collections::Generic::IComparer_1<TKey> comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::ArraySortHelper_2<TKey,TValue>>::get(),
                            "IntrospectiveSort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IComparer_1<TKey>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, keys, values, left, length, comparer);
}
 void System::Collections::Generic::ArraySortHelper_2<TKey,TValue>::IntroSort(::ArrayW<TKey> keys, ::ArrayW<TValue> values, int32_t lo, int32_t hi, int32_t depthLimit, System::Collections::Generic::IComparer_1<TKey> comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::ArraySortHelper_2<TKey,TValue>>::get(),
                            "IntroSort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IComparer_1<TKey>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, keys, values, lo, hi, depthLimit, comparer);
}
 int32_t System::Collections::Generic::ArraySortHelper_2<TKey,TValue>::PickPivotAndPartition(::ArrayW<TKey> keys, ::ArrayW<TValue> values, int32_t lo, int32_t hi, System::Collections::Generic::IComparer_1<TKey> comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::ArraySortHelper_2<TKey,TValue>>::get(),
                            "PickPivotAndPartition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IComparer_1<TKey>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, keys, values, lo, hi, comparer);
}
 void System::Collections::Generic::ArraySortHelper_2<TKey,TValue>::Heapsort(::ArrayW<TKey> keys, ::ArrayW<TValue> values, int32_t lo, int32_t hi, System::Collections::Generic::IComparer_1<TKey> comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::ArraySortHelper_2<TKey,TValue>>::get(),
                            "Heapsort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IComparer_1<TKey>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, keys, values, lo, hi, comparer);
}
 void System::Collections::Generic::ArraySortHelper_2<TKey,TValue>::DownHeap(::ArrayW<TKey> keys, ::ArrayW<TValue> values, int32_t i, int32_t n, int32_t lo, System::Collections::Generic::IComparer_1<TKey> comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::ArraySortHelper_2<TKey,TValue>>::get(),
                            "DownHeap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IComparer_1<TKey>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, keys, values, i, n, lo, comparer);
}
 void System::Collections::Generic::ArraySortHelper_2<TKey,TValue>::InsertionSort(::ArrayW<TKey> keys, ::ArrayW<TValue> values, int32_t lo, int32_t hi, System::Collections::Generic::IComparer_1<TKey> comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::ArraySortHelper_2<TKey,TValue>>::get(),
                            "InsertionSort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IComparer_1<TKey>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, keys, values, lo, hi, comparer);
}
 System::Collections::Generic::ArraySortHelper_2<TKey,TValue> System::Collections::Generic::ArraySortHelper_2<TKey,TValue>::get_Default()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::ArraySortHelper_2<TKey,TValue>>::get(),
                            "get_Default",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::ArraySortHelper_2<TKey,TValue>, false>(nullptr, ___internal_method);
}
 System::Collections::Generic::ArraySortHelper_2<TKey,TValue> System::Collections::Generic::ArraySortHelper_2<TKey,TValue>::New_ctor()  {
System::Collections::Generic::ArraySortHelper_2<TKey,TValue> o{THROW_UNLESS(::il2cpp_utils::New<System::Collections::Generic::ArraySortHelper_2<TKey,TValue>>())};
return o;
}
 void System::Collections::Generic::ArraySortHelper_2<TKey,TValue>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::ArraySortHelper_2<TKey,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Generic::ArraySortHelper_2<TKey,TValue>::__set_s_defaultArraySortHelper(System::Collections::Generic::ArraySortHelper_2<TKey,TValue> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::ArraySortHelper_2<TKey,TValue>, "s_defaultArraySortHelper", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::ArraySortHelper_2<TKey,TValue>>::get>(std::forward<System::Collections::Generic::ArraySortHelper_2<TKey,TValue>>(value));
}
 System::Collections::Generic::ArraySortHelper_2<TKey,TValue> System::Collections::Generic::ArraySortHelper_2<TKey,TValue>::__get_s_defaultArraySortHelper()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::ArraySortHelper_2<TKey,TValue>, "s_defaultArraySortHelper", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::ArraySortHelper_2<TKey,TValue>>::get>();
}
 void System::Collections::Generic::ArraySortHelper_2<TKey,TValue>::Sort(::ArrayW<TKey> keys, ::ArrayW<TValue> values, int32_t index, int32_t length, System::Collections::Generic::IComparer_1<TKey> comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::ArraySortHelper_2<TKey,TValue>>::get(),
                            "Sort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IComparer_1<TKey>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, keys, values, index, length, comparer);
}
 void System::Collections::Generic::ArraySortHelper_2<TKey,TValue>::SwapIfGreaterWithItems(::ArrayW<TKey> keys, ::ArrayW<TValue> values, System::Collections::Generic::IComparer_1<TKey> comparer, int32_t a, int32_t b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::ArraySortHelper_2<TKey,TValue>>::get(),
                            "SwapIfGreaterWithItems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IComparer_1<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, keys, values, comparer, a, b);
}
 void System::Collections::Generic::ArraySortHelper_2<TKey,TValue>::Swap(::ArrayW<TKey> keys, ::ArrayW<TValue> values, int32_t i, int32_t j)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::ArraySortHelper_2<TKey,TValue>>::get(),
                            "Swap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, keys, values, i, j);
}
 void System::Collections::Generic::ArraySortHelper_2<TKey,TValue>::IntrospectiveSort(::ArrayW<TKey> keys, ::ArrayW<TValue> values, int32_t left, int32_t length, System::Collections::Generic::IComparer_1<TKey> comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::ArraySortHelper_2<TKey,TValue>>::get(),
                            "IntrospectiveSort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IComparer_1<TKey>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, keys, values, left, length, comparer);
}
 void System::Collections::Generic::ArraySortHelper_2<TKey,TValue>::IntroSort(::ArrayW<TKey> keys, ::ArrayW<TValue> values, int32_t lo, int32_t hi, int32_t depthLimit, System::Collections::Generic::IComparer_1<TKey> comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::ArraySortHelper_2<TKey,TValue>>::get(),
                            "IntroSort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IComparer_1<TKey>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, keys, values, lo, hi, depthLimit, comparer);
}
 int32_t System::Collections::Generic::ArraySortHelper_2<TKey,TValue>::PickPivotAndPartition(::ArrayW<TKey> keys, ::ArrayW<TValue> values, int32_t lo, int32_t hi, System::Collections::Generic::IComparer_1<TKey> comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::ArraySortHelper_2<TKey,TValue>>::get(),
                            "PickPivotAndPartition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IComparer_1<TKey>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, keys, values, lo, hi, comparer);
}
 void System::Collections::Generic::ArraySortHelper_2<TKey,TValue>::Heapsort(::ArrayW<TKey> keys, ::ArrayW<TValue> values, int32_t lo, int32_t hi, System::Collections::Generic::IComparer_1<TKey> comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::ArraySortHelper_2<TKey,TValue>>::get(),
                            "Heapsort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IComparer_1<TKey>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, keys, values, lo, hi, comparer);
}
 void System::Collections::Generic::ArraySortHelper_2<TKey,TValue>::DownHeap(::ArrayW<TKey> keys, ::ArrayW<TValue> values, int32_t i, int32_t n, int32_t lo, System::Collections::Generic::IComparer_1<TKey> comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::ArraySortHelper_2<TKey,TValue>>::get(),
                            "DownHeap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IComparer_1<TKey>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, keys, values, i, n, lo, comparer);
}
 void System::Collections::Generic::ArraySortHelper_2<TKey,TValue>::InsertionSort(::ArrayW<TKey> keys, ::ArrayW<TValue> values, int32_t lo, int32_t hi, System::Collections::Generic::IComparer_1<TKey> comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::ArraySortHelper_2<TKey,TValue>>::get(),
                            "InsertionSort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IComparer_1<TKey>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, keys, values, lo, hi, comparer);
}
 System::Collections::Generic::ArraySortHelper_2<TKey,TValue> System::Collections::Generic::ArraySortHelper_2<TKey,TValue>::get_Default()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::ArraySortHelper_2<TKey,TValue>>::get(),
                            "get_Default",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::ArraySortHelper_2<TKey,TValue>, false>(nullptr, ___internal_method);
}
 System::Collections::Generic::ArraySortHelper_2<TKey,TValue> System::Collections::Generic::ArraySortHelper_2<TKey,TValue>::New_ctor()  {
System::Collections::Generic::ArraySortHelper_2<TKey,TValue> o{THROW_UNLESS(::il2cpp_utils::New<System::Collections::Generic::ArraySortHelper_2<TKey,TValue>>())};
return o;
}
 void System::Collections::Generic::ArraySortHelper_2<TKey,TValue>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::ArraySortHelper_2<TKey,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
