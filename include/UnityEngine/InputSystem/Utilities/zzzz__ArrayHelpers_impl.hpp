#pragma once
#include "UnityEngine/InputSystem/Utilities/zzzz__ArrayHelpers_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_def.hpp"
template<typename TValue>
 int32_t UnityEngine::InputSystem::Utilities::ArrayHelpers::LengthSafe(::ArrayW<TValue> array)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::ArrayHelpers>::get(),
                        "LengthSafe",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, array);
}
template<typename TValue>
 void UnityEngine::InputSystem::Utilities::ArrayHelpers::Clear(::ArrayW<TValue> array)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::ArrayHelpers>::get(),
                        "Clear",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, array);
}
template<typename TValue>
 void UnityEngine::InputSystem::Utilities::ArrayHelpers::Clear(::ArrayW<TValue> array, int32_t count)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::ArrayHelpers>::get(),
                        "Clear",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, array, count);
}
template<typename TValue>
 void UnityEngine::InputSystem::Utilities::ArrayHelpers::Clear(::ArrayW<TValue> array, ByRef<int32_t> count)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::ArrayHelpers>::get(),
                        "Clear",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, array, count);
}
/// @param capacityIncrement: int32_t (default: 10)
template<typename TValue>
 void UnityEngine::InputSystem::Utilities::ArrayHelpers::EnsureCapacity(ByRef<::ArrayW<TValue>> array, int32_t count, int32_t capacity, int32_t capacityIncrement)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::ArrayHelpers>::get(),
                        "EnsureCapacity",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<TValue>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, array, count, capacity, capacityIncrement);
}
/// @param capacityIncrement: int32_t (default: 10)
template<typename TValue>
 void UnityEngine::InputSystem::Utilities::ArrayHelpers::DuplicateWithCapacity(ByRef<::ArrayW<TValue>> array, int32_t count, int32_t capacity, int32_t capacityIncrement)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::ArrayHelpers>::get(),
                        "DuplicateWithCapacity",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<TValue>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, array, count, capacity, capacityIncrement);
}
template<typename TValue>
 bool UnityEngine::InputSystem::Utilities::ArrayHelpers::Contains(::ArrayW<TValue> array, TValue value)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::ArrayHelpers>::get(),
                        "Contains",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, array, value);
}
template<typename TValue>
 bool UnityEngine::InputSystem::Utilities::ArrayHelpers::ContainsReference(::ArrayW<TValue> array, TValue value)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::ArrayHelpers>::get(),
                        "ContainsReference",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, array, value);
}
template<typename TFirst,typename TSecond>
 bool UnityEngine::InputSystem::Utilities::ArrayHelpers::ContainsReference(::ArrayW<TFirst> array, int32_t count, TSecond value)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::ArrayHelpers>::get(),
                        "ContainsReference",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFirst>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSecond>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TFirst>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TSecond>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFirst>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSecond>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, array, count, value);
}
template<typename TFirst,typename TSecond>
 bool UnityEngine::InputSystem::Utilities::ArrayHelpers::ContainsReference(::ArrayW<TFirst> array, int32_t startIndex, int32_t count, TSecond value)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::ArrayHelpers>::get(),
                        "ContainsReference",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFirst>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSecond>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TFirst>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TSecond>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFirst>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSecond>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, array, startIndex, count, value);
}
template<typename TFirst>
 bool UnityEngine::InputSystem::Utilities::ArrayHelpers::HaveDuplicateReferences(::ArrayW<TFirst> first, int32_t index, int32_t count)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::ArrayHelpers>::get(),
                        "HaveDuplicateReferences",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFirst>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TFirst>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFirst>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, first, index, count);
}
/// @param count: int32_t (default: 2147483647)
template<typename TValue>
 bool UnityEngine::InputSystem::Utilities::ArrayHelpers::HaveEqualElements(::ArrayW<TValue> first, ::ArrayW<TValue> second, int32_t count)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::ArrayHelpers>::get(),
                        "HaveEqualElements",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, first, second, count);
}
/// @param startIndex: int32_t (default: 0)
/// @param count: int32_t (default: -1)
template<typename TValue>
 int32_t UnityEngine::InputSystem::Utilities::ArrayHelpers::IndexOf(::ArrayW<TValue> array, TValue value, int32_t startIndex, int32_t count)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::ArrayHelpers>::get(),
                        "IndexOf",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, array, value, startIndex, count);
}
template<typename TValue>
 int32_t UnityEngine::InputSystem::Utilities::ArrayHelpers::IndexOf(::ArrayW<TValue> array, System::Predicate_1<TValue> predicate)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::ArrayHelpers>::get(),
                        "IndexOf",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Predicate_1<TValue>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, array, predicate);
}
/// @param startIndex: int32_t (default: 0)
/// @param count: int32_t (default: -1)
template<typename TValue>
 int32_t UnityEngine::InputSystem::Utilities::ArrayHelpers::IndexOf(::ArrayW<TValue> array, System::Predicate_1<TValue> predicate, int32_t startIndex, int32_t count)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::ArrayHelpers>::get(),
                        "IndexOf",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Predicate_1<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, array, predicate, startIndex, count);
}
/// @param count: int32_t (default: -1)
template<typename TFirst,typename TSecond>
 int32_t UnityEngine::InputSystem::Utilities::ArrayHelpers::IndexOfReference(::ArrayW<TFirst> array, TSecond value, int32_t count)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::ArrayHelpers>::get(),
                        "IndexOfReference",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFirst>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSecond>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TFirst>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TSecond>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFirst>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSecond>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, array, value, count);
}
template<typename TFirst,typename TSecond>
 int32_t UnityEngine::InputSystem::Utilities::ArrayHelpers::IndexOfReference(::ArrayW<TFirst> array, TSecond value, int32_t startIndex, int32_t count)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::ArrayHelpers>::get(),
                        "IndexOfReference",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFirst>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSecond>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TFirst>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TSecond>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFirst>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSecond>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, array, value, startIndex, count);
}
/// @param startIndex: int32_t (default: 0)
/// @param count: int32_t (default: -1)
template<typename TValue>
 int32_t UnityEngine::InputSystem::Utilities::ArrayHelpers::IndexOfValue(::ArrayW<TValue> array, TValue value, int32_t startIndex, int32_t count)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::ArrayHelpers>::get(),
                        "IndexOfValue",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, array, value, startIndex, count);
}
template<typename TValue>
 void UnityEngine::InputSystem::Utilities::ArrayHelpers::Resize(ByRef<Unity::Collections::NativeArray_1<TValue>> array, int32_t newSize, Unity::Collections::Allocator allocator)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::ArrayHelpers>::get(),
                        "Resize",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Unity::Collections::NativeArray_1<TValue>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Collections::Allocator>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, array, newSize, allocator);
}
template<typename TValue>
 int32_t UnityEngine::InputSystem::Utilities::ArrayHelpers::Append(ByRef<::ArrayW<TValue>> array, TValue value)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::ArrayHelpers>::get(),
                        "Append",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<TValue>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, array, value);
}
template<typename TValue>
 int32_t UnityEngine::InputSystem::Utilities::ArrayHelpers::Append(ByRef<::ArrayW<TValue>> array, System::Collections::Generic::IEnumerable_1<TValue> values)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::ArrayHelpers>::get(),
                        "Append",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<TValue>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<TValue>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, array, values);
}
template<typename TValue>
 int32_t UnityEngine::InputSystem::Utilities::ArrayHelpers::AppendToImmutable(ByRef<::ArrayW<TValue>> array, ::ArrayW<TValue> values)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::ArrayHelpers>::get(),
                        "AppendToImmutable",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<TValue>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, array, values);
}
/// @param capacityIncrement: int32_t (default: 10)
template<typename TValue>
 int32_t UnityEngine::InputSystem::Utilities::ArrayHelpers::AppendWithCapacity(ByRef<::ArrayW<TValue>> array, ByRef<int32_t> count, TValue value, int32_t capacityIncrement)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::ArrayHelpers>::get(),
                        "AppendWithCapacity",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<TValue>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, array, count, value, capacityIncrement);
}
/// @param capacityIncrement: int32_t (default: 10)
template<typename TValue,typename TValues>
 int32_t UnityEngine::InputSystem::Utilities::ArrayHelpers::AppendListWithCapacity(ByRef<::ArrayW<TValue>> array, ByRef<int32_t> length, TValues values, int32_t capacityIncrement)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::ArrayHelpers>::get(),
                        "AppendListWithCapacity",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValues>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<TValue>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValues>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValues>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, array, length, values, capacityIncrement);
}
/// @param capacityIncrement: int32_t (default: 10)
/// @param allocator: Unity::Collections::Allocator (default: 4)
template<typename TValue>
 int32_t UnityEngine::InputSystem::Utilities::ArrayHelpers::AppendWithCapacity(ByRef<Unity::Collections::NativeArray_1<TValue>> array, ByRef<int32_t> count, TValue value, int32_t capacityIncrement, Unity::Collections::Allocator allocator)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::ArrayHelpers>::get(),
                        "AppendWithCapacity",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Unity::Collections::NativeArray_1<TValue>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Collections::Allocator>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, array, count, value, capacityIncrement, allocator);
}
template<typename TValue>
 void UnityEngine::InputSystem::Utilities::ArrayHelpers::InsertAt(ByRef<::ArrayW<TValue>> array, int32_t index, TValue value)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::ArrayHelpers>::get(),
                        "InsertAt",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<TValue>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, array, index, value);
}
/// @param capacityIncrement: int32_t (default: 10)
template<typename TValue>
 void UnityEngine::InputSystem::Utilities::ArrayHelpers::InsertAtWithCapacity(ByRef<::ArrayW<TValue>> array, ByRef<int32_t> count, int32_t index, TValue value, int32_t capacityIncrement)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::ArrayHelpers>::get(),
                        "InsertAtWithCapacity",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<TValue>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, array, count, index, value, capacityIncrement);
}
template<typename TValue>
 void UnityEngine::InputSystem::Utilities::ArrayHelpers::PutAtIfNotSet(ByRef<::ArrayW<TValue>> array, int32_t index, System::Func_1<TValue> valueFn)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::ArrayHelpers>::get(),
                        "PutAtIfNotSet",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<TValue>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_1<TValue>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, array, index, valueFn);
}
template<typename TValue>
 int32_t UnityEngine::InputSystem::Utilities::ArrayHelpers::GrowBy(ByRef<::ArrayW<TValue>> array, int32_t count)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::ArrayHelpers>::get(),
                        "GrowBy",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<TValue>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, array, count);
}
/// @param allocator: Unity::Collections::Allocator (default: 4)
template<typename TValue>
 int32_t UnityEngine::InputSystem::Utilities::ArrayHelpers::GrowBy(ByRef<Unity::Collections::NativeArray_1<TValue>> array, int32_t count, Unity::Collections::Allocator allocator)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::ArrayHelpers>::get(),
                        "GrowBy",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Unity::Collections::NativeArray_1<TValue>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Collections::Allocator>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, array, count, allocator);
}
/// @param capacityIncrement: int32_t (default: 10)
template<typename TValue>
 int32_t UnityEngine::InputSystem::Utilities::ArrayHelpers::GrowWithCapacity(ByRef<::ArrayW<TValue>> array, ByRef<int32_t> count, int32_t growBy, int32_t capacityIncrement)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::ArrayHelpers>::get(),
                        "GrowWithCapacity",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<TValue>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, array, count, growBy, capacityIncrement);
}
/// @param capacityIncrement: int32_t (default: 10)
/// @param allocator: Unity::Collections::Allocator (default: 4)
template<typename TValue>
 int32_t UnityEngine::InputSystem::Utilities::ArrayHelpers::GrowWithCapacity(ByRef<Unity::Collections::NativeArray_1<TValue>> array, ByRef<int32_t> count, int32_t growBy, int32_t capacityIncrement, Unity::Collections::Allocator allocator)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::ArrayHelpers>::get(),
                        "GrowWithCapacity",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Unity::Collections::NativeArray_1<TValue>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Collections::Allocator>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, array, count, growBy, capacityIncrement, allocator);
}
template<typename TValue>
 ::ArrayW<TValue> UnityEngine::InputSystem::Utilities::ArrayHelpers::Join(TValue value, ::ArrayW<TValue> values)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::ArrayHelpers>::get(),
                        "Join",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::ArrayW<TValue>, false>(nullptr, ___internal_method, value, values);
}
template<typename TValue>
 ::ArrayW<TValue> UnityEngine::InputSystem::Utilities::ArrayHelpers::Merge(::ArrayW<TValue> first, ::ArrayW<TValue> second)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::ArrayHelpers>::get(),
                        "Merge",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::ArrayW<TValue>, false>(nullptr, ___internal_method, first, second);
}
template<typename TValue>
 ::ArrayW<TValue> UnityEngine::InputSystem::Utilities::ArrayHelpers::Merge(::ArrayW<TValue> first, ::ArrayW<TValue> second, System::Collections::Generic::IEqualityComparer_1<TValue> comparer)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::ArrayHelpers>::get(),
                        "Merge",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEqualityComparer_1<TValue>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::ArrayW<TValue>, false>(nullptr, ___internal_method, first, second, comparer);
}
template<typename TValue>
 void UnityEngine::InputSystem::Utilities::ArrayHelpers::EraseAt(ByRef<::ArrayW<TValue>> array, int32_t index)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::ArrayHelpers>::get(),
                        "EraseAt",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<TValue>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, array, index);
}
template<typename TValue>
 void UnityEngine::InputSystem::Utilities::ArrayHelpers::EraseAtWithCapacity(::ArrayW<TValue> array, ByRef<int32_t> count, int32_t index)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::ArrayHelpers>::get(),
                        "EraseAtWithCapacity",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, array, count, index);
}
template<typename TValue>
 void UnityEngine::InputSystem::Utilities::ArrayHelpers::EraseAtWithCapacity(Unity::Collections::NativeArray_1<TValue> array, ByRef<int32_t> count, int32_t index)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::ArrayHelpers>::get(),
                        "EraseAtWithCapacity",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Collections::NativeArray_1<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, array, count, index);
}
template<typename TValue>
 bool UnityEngine::InputSystem::Utilities::ArrayHelpers::Erase(ByRef<::ArrayW<TValue>> array, TValue value)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::ArrayHelpers>::get(),
                        "Erase",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<TValue>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, array, value);
}
template<typename TValue>
 void UnityEngine::InputSystem::Utilities::ArrayHelpers::EraseAtByMovingTail(::ArrayW<TValue> array, ByRef<int32_t> count, int32_t index)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::ArrayHelpers>::get(),
                        "EraseAtByMovingTail",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, array, count, index);
}
template<typename TValue>
 ::ArrayW<TValue> UnityEngine::InputSystem::Utilities::ArrayHelpers::Copy(::ArrayW<TValue> array)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::ArrayHelpers>::get(),
                        "Copy",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::ArrayW<TValue>, false>(nullptr, ___internal_method, array);
}
template<typename TValue>
 ::ArrayW<TValue> UnityEngine::InputSystem::Utilities::ArrayHelpers::Clone(::ArrayW<TValue> array)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::ArrayHelpers>::get(),
                        "Clone",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::ArrayW<TValue>, false>(nullptr, ___internal_method, array);
}
template<typename TOld,typename TNew>
 ::ArrayW<TNew> UnityEngine::InputSystem::Utilities::ArrayHelpers::Select(::ArrayW<TOld> array, System::Func_2<TOld,TNew> converter)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::ArrayHelpers>::get(),
                        "Select",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TOld>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TNew>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TOld>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<TOld,TNew>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TOld>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TNew>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::ArrayW<TNew>, false>(nullptr, ___internal_method, array, converter);
}
template<typename TValue>
 void UnityEngine::InputSystem::Utilities::ArrayHelpers::Swap(ByRef<TValue> first, ByRef<TValue> second)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::ArrayHelpers>::get(),
                        "Swap",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, first, second);
}
template<typename TValue>
 void UnityEngine::InputSystem::Utilities::ArrayHelpers::MoveSlice(::ArrayW<TValue> array, int32_t sourceIndex, int32_t destinationIndex, int32_t count)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::ArrayHelpers>::get(),
                        "MoveSlice",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, array, sourceIndex, destinationIndex, count);
}
template<typename TValue>
 void UnityEngine::InputSystem::Utilities::ArrayHelpers::EraseSliceWithCapacity(ByRef<::ArrayW<TValue>> array, ByRef<int32_t> length, int32_t index, int32_t count)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::ArrayHelpers>::get(),
                        "EraseSliceWithCapacity",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<TValue>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, array, length, index, count);
}
template<typename TValue>
 void UnityEngine::InputSystem::Utilities::ArrayHelpers::SwapElements(::ArrayW<TValue> array, int32_t index1, int32_t index2)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::ArrayHelpers>::get(),
                        "SwapElements",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, array, index1, index2);
}
template<typename TValue>
 void UnityEngine::InputSystem::Utilities::ArrayHelpers::SwapElements(Unity::Collections::NativeArray_1<TValue> array, int32_t index1, int32_t index2)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::ArrayHelpers>::get(),
                        "SwapElements",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Collections::NativeArray_1<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, array, index1, index2);
}
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1::*)()>(&UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1._Merge_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1::*)(TValue)>(&UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1::_Merge_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1>::get(),
                            "<Merge>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1::__set_secondValue(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<TValue>(value));
}
constexpr TValue UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1::__get_secondValue() const {
return ::cordl_internals::getInstanceField<TValue, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1>())) {}
 void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1::_Merge_b__0(TValue x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1>::get(),
                            "<Merge>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, x);
}
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1<UnityEngine::InputSystem::Utilities::InternedString>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1<UnityEngine::InputSystem::Utilities::InternedString>::*)()>(&UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1<UnityEngine::InputSystem::Utilities::InternedString>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1<UnityEngine::InputSystem::Utilities::InternedString>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1<UnityEngine::InputSystem::Utilities::InternedString>._Merge_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1<UnityEngine::InputSystem::Utilities::InternedString>::*)(UnityEngine::InputSystem::Utilities::InternedString)>(&UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1<UnityEngine::InputSystem::Utilities::InternedString>::_Merge_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1<UnityEngine::InputSystem::Utilities::InternedString>>::get(),
                            "<Merge>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1<UnityEngine::InputSystem::Utilities::InternedString>::__set_secondValue(UnityEngine::InputSystem::Utilities::InternedString value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::InternedString, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::Utilities::InternedString>(value));
}
constexpr UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1<UnityEngine::InputSystem::Utilities::InternedString>::__get_secondValue() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::InternedString, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1<UnityEngine::InputSystem::Utilities::InternedString>::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1>())) {}
 void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1<UnityEngine::InputSystem::Utilities::InternedString>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1<UnityEngine::InputSystem::Utilities::InternedString>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1<UnityEngine::InputSystem::Utilities::InternedString>::_Merge_b__0(UnityEngine::InputSystem::Utilities::InternedString x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass33_0_1<UnityEngine::InputSystem::Utilities::InternedString>>::get(),
                            "<Merge>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, x);
}
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_0_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_0_1::*)()>(&UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_0_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_0_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_0_1::__set_comparer(System::Collections::Generic::IEqualityComparer_1<TValue> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IEqualityComparer_1<TValue>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IEqualityComparer_1<TValue>>(value));
}
constexpr System::Collections::Generic::IEqualityComparer_1<TValue> UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_0_1::__get_comparer() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IEqualityComparer_1<TValue>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_0_1::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_0_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_0_1>())) {}
 void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_0_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_0_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_1_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_1_1::*)()>(&UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_1_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_1_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_1_1._Merge_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_1_1::*)(TValue)>(&UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_1_1::_Merge_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_1_1>::get(),
                            "<Merge>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_1_1::__set_secondValue(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<TValue>(value));
}
constexpr TValue UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_1_1::__get_secondValue() const {
return ::cordl_internals::getInstanceField<TValue, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_1_1::__set_CS$__8__locals1(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_0_1<TValue> value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_0_1<TValue>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_0_1<TValue>>(value));
}
constexpr UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_0_1<TValue> UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_1_1::__get_CS$__8__locals1() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_0_1<TValue>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_1_1::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_1_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_1_1>())) {}
 void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_1_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_1_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_1_1::_Merge_b__0(TValue x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ArrayHelpers____c__DisplayClass34_1_1>::get(),
                            "<Merge>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, x);
}
