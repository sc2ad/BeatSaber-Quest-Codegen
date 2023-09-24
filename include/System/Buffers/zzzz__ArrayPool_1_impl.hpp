#pragma once
#include "System/Buffers/zzzz__ArrayPool_1_def.hpp"
 void System::Buffers::ArrayPool_1<T>::__set__Shared_k__BackingField(System::Buffers::ArrayPool_1<T> value)  {
::cordl_internals::setStaticField<System::Buffers::ArrayPool_1<T>, "<Shared>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPool_1<T>>::get>(std::forward<System::Buffers::ArrayPool_1<T>>(value));
}
 System::Buffers::ArrayPool_1<T> System::Buffers::ArrayPool_1<T>::__get__Shared_k__BackingField()  {
return ::cordl_internals::getStaticField<System::Buffers::ArrayPool_1<T>, "<Shared>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPool_1<T>>::get>();
}
 System::Buffers::ArrayPool_1<T> System::Buffers::ArrayPool_1<T>::get_Shared()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPool_1<T>>::get(),
                            "get_Shared",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Buffers::ArrayPool_1<T>, false>(nullptr, ___internal_method);
}
 ::ArrayW<T> System::Buffers::ArrayPool_1<T>::Rent(int32_t minimumLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPool_1<T>>::get(),
                            "Rent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>, false>(const_cast<void*>(instance), ___internal_method, minimumLength);
}
/// @param clearArray: bool (default: false)
 void System::Buffers::ArrayPool_1<T>::Return(::ArrayW<T> array, bool clearArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPool_1<T>>::get(),
                            "Return",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array, clearArray);
}
 System::Buffers::ArrayPool_1<T> System::Buffers::ArrayPool_1<T>::New_ctor()  {
System::Buffers::ArrayPool_1<T> o{THROW_UNLESS(::il2cpp_utils::New<System::Buffers::ArrayPool_1<T>>())};
return o;
}
 void System::Buffers::ArrayPool_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPool_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Buffers::ArrayPool_1<char16_t>.get_Shared
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Buffers::ArrayPool_1<char16_t> (*)()>(&System::Buffers::ArrayPool_1<char16_t>::get_Shared)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPool_1<char16_t>>::get(),
                            "get_Shared",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Buffers::ArrayPool_1<char16_t>.Rent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<char16_t> (System::Buffers::ArrayPool_1<char16_t>::*)(int32_t)>(&System::Buffers::ArrayPool_1<char16_t>::Rent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Buffers::ArrayPool_1<char16_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPool_1>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Buffers::ArrayPool_1<char16_t>.Return
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Buffers::ArrayPool_1<char16_t>::*)(::ArrayW<char16_t>, bool)>(&System::Buffers::ArrayPool_1<char16_t>::Return)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Buffers::ArrayPool_1<char16_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPool_1>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Buffers::ArrayPool_1<char16_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Buffers::ArrayPool_1<char16_t>::*)()>(&System::Buffers::ArrayPool_1<char16_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPool_1<char16_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void System::Buffers::ArrayPool_1<char16_t>::__set__Shared_k__BackingField(System::Buffers::ArrayPool_1<char16_t> value)  {
::cordl_internals::setStaticField<System::Buffers::ArrayPool_1<char16_t>, "<Shared>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPool_1<char16_t>>::get>(std::forward<System::Buffers::ArrayPool_1<char16_t>>(value));
}
 System::Buffers::ArrayPool_1<char16_t> System::Buffers::ArrayPool_1<char16_t>::__get__Shared_k__BackingField()  {
return ::cordl_internals::getStaticField<System::Buffers::ArrayPool_1<char16_t>, "<Shared>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPool_1<char16_t>>::get>();
}
 System::Buffers::ArrayPool_1<char16_t> System::Buffers::ArrayPool_1<char16_t>::get_Shared()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPool_1<char16_t>>::get(),
                            "get_Shared",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Buffers::ArrayPool_1<char16_t>, false>(nullptr, ___internal_method);
}
 ::ArrayW<char16_t> System::Buffers::ArrayPool_1<char16_t>::Rent(int32_t minimumLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPool_1<char16_t>>::get(),
                            "Rent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t>, false>(const_cast<void*>(instance), ___internal_method, minimumLength);
}
/// @param clearArray: bool (default: false)
 void System::Buffers::ArrayPool_1<char16_t>::Return(::ArrayW<char16_t> array, bool clearArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPool_1<char16_t>>::get(),
                            "Return",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array, clearArray);
}
 System::Buffers::ArrayPool_1<char16_t> System::Buffers::ArrayPool_1<char16_t>::New_ctor()  {
System::Buffers::ArrayPool_1<char16_t> o{THROW_UNLESS(::il2cpp_utils::New<System::Buffers::ArrayPool_1<char16_t>>())};
return o;
}
 void System::Buffers::ArrayPool_1<char16_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPool_1<char16_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Buffers::ArrayPool_1<T>::__set__Shared_k__BackingField(System::Buffers::ArrayPool_1<T> value)  {
::cordl_internals::setStaticField<System::Buffers::ArrayPool_1<T>, "<Shared>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPool_1<T>>::get>(std::forward<System::Buffers::ArrayPool_1<T>>(value));
}
 System::Buffers::ArrayPool_1<T> System::Buffers::ArrayPool_1<T>::__get__Shared_k__BackingField()  {
return ::cordl_internals::getStaticField<System::Buffers::ArrayPool_1<T>, "<Shared>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPool_1<T>>::get>();
}
 System::Buffers::ArrayPool_1<T> System::Buffers::ArrayPool_1<T>::get_Shared()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPool_1<T>>::get(),
                            "get_Shared",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Buffers::ArrayPool_1<T>, false>(nullptr, ___internal_method);
}
 ::ArrayW<T> System::Buffers::ArrayPool_1<T>::Rent(int32_t minimumLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPool_1<T>>::get(),
                            "Rent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>, false>(const_cast<void*>(instance), ___internal_method, minimumLength);
}
/// @param clearArray: bool (default: false)
 void System::Buffers::ArrayPool_1<T>::Return(::ArrayW<T> array, bool clearArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPool_1<T>>::get(),
                            "Return",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array, clearArray);
}
 System::Buffers::ArrayPool_1<T> System::Buffers::ArrayPool_1<T>::New_ctor()  {
System::Buffers::ArrayPool_1<T> o{THROW_UNLESS(::il2cpp_utils::New<System::Buffers::ArrayPool_1<T>>())};
return o;
}
 void System::Buffers::ArrayPool_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPool_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Buffers::ArrayPool_1<T>::__set__Shared_k__BackingField(System::Buffers::ArrayPool_1<T> value)  {
::cordl_internals::setStaticField<System::Buffers::ArrayPool_1<T>, "<Shared>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPool_1<T>>::get>(std::forward<System::Buffers::ArrayPool_1<T>>(value));
}
 System::Buffers::ArrayPool_1<T> System::Buffers::ArrayPool_1<T>::__get__Shared_k__BackingField()  {
return ::cordl_internals::getStaticField<System::Buffers::ArrayPool_1<T>, "<Shared>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPool_1<T>>::get>();
}
 System::Buffers::ArrayPool_1<T> System::Buffers::ArrayPool_1<T>::get_Shared()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPool_1<T>>::get(),
                            "get_Shared",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Buffers::ArrayPool_1<T>, false>(nullptr, ___internal_method);
}
 ::ArrayW<T> System::Buffers::ArrayPool_1<T>::Rent(int32_t minimumLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPool_1<T>>::get(),
                            "Rent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>, false>(const_cast<void*>(instance), ___internal_method, minimumLength);
}
/// @param clearArray: bool (default: false)
 void System::Buffers::ArrayPool_1<T>::Return(::ArrayW<T> array, bool clearArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPool_1<T>>::get(),
                            "Return",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array, clearArray);
}
 System::Buffers::ArrayPool_1<T> System::Buffers::ArrayPool_1<T>::New_ctor()  {
System::Buffers::ArrayPool_1<T> o{THROW_UNLESS(::il2cpp_utils::New<System::Buffers::ArrayPool_1<T>>())};
return o;
}
 void System::Buffers::ArrayPool_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPool_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
