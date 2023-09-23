#pragma once
#include "System/Buffers/zzzz__ArrayPool_1_def.hpp"
//  Writing Method size for method: System::Buffers::ArrayPool_1.get_Shared
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Buffers::ArrayPool_1<T> (*)()>(&System::Buffers::ArrayPool_1::get_Shared)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPool_1>::get(),
                            "get_Shared",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Buffers::ArrayPool_1.Rent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<T> (System::Buffers::ArrayPool_1::*)(int32_t)>(&System::Buffers::ArrayPool_1::Rent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Buffers::ArrayPool_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPool_1>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Buffers::ArrayPool_1.Return
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Buffers::ArrayPool_1::*)(::ArrayW<T>, bool)>(&System::Buffers::ArrayPool_1::Return)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Buffers::ArrayPool_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPool_1>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Buffers::ArrayPool_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Buffers::ArrayPool_1::*)()>(&System::Buffers::ArrayPool_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPool_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void System::Buffers::ArrayPool_1::__set__Shared_k__BackingField(System::Buffers::ArrayPool_1<T> value)  {
::cordl_internals::setStaticField<System::Buffers::ArrayPool_1<T>, "<Shared>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPool_1>::get>(std::forward<System::Buffers::ArrayPool_1<T>>(value));
}
 System::Buffers::ArrayPool_1<T> System::Buffers::ArrayPool_1::__get__Shared_k__BackingField()  {
return ::cordl_internals::getStaticField<System::Buffers::ArrayPool_1<T>, "<Shared>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPool_1>::get>();
}
 System::Buffers::ArrayPool_1<T> System::Buffers::ArrayPool_1::get_Shared()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPool_1>::get(),
                            "get_Shared",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Buffers::ArrayPool_1<T>, false>(nullptr, ___internal_method);
}
 ::ArrayW<T> System::Buffers::ArrayPool_1::Rent(int32_t minimumLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPool_1>::get(),
                            "Rent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>, false>(const_cast<void*>(instance), ___internal_method, minimumLength);
}
/// @param clearArray: bool (default: false)
 void System::Buffers::ArrayPool_1::Return(::ArrayW<T> array, bool clearArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPool_1>::get(),
                            "Return",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array, clearArray);
}
// Ctor Parameters []
 System::Buffers::ArrayPool_1::ArrayPool_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ArrayPool_1>())) {}
 void System::Buffers::ArrayPool_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPool_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Buffers::ArrayPool_1<int32_t>.get_Shared
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Buffers::ArrayPool_1<int32_t> (*)()>(&System::Buffers::ArrayPool_1<int32_t>::get_Shared)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPool_1<int32_t>>::get(),
                            "get_Shared",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Buffers::ArrayPool_1<int32_t>.Rent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t> (System::Buffers::ArrayPool_1<int32_t>::*)(int32_t)>(&System::Buffers::ArrayPool_1<int32_t>::Rent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Buffers::ArrayPool_1<int32_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPool_1>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Buffers::ArrayPool_1<int32_t>.Return
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Buffers::ArrayPool_1<int32_t>::*)(::ArrayW<int32_t>, bool)>(&System::Buffers::ArrayPool_1<int32_t>::Return)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Buffers::ArrayPool_1<int32_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPool_1>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Buffers::ArrayPool_1<int32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Buffers::ArrayPool_1<int32_t>::*)()>(&System::Buffers::ArrayPool_1<int32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPool_1<int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void System::Buffers::ArrayPool_1<int32_t>::__set__Shared_k__BackingField(System::Buffers::ArrayPool_1<int32_t> value)  {
::cordl_internals::setStaticField<System::Buffers::ArrayPool_1<int32_t>, "<Shared>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPool_1<int32_t>>::get>(std::forward<System::Buffers::ArrayPool_1<int32_t>>(value));
}
 System::Buffers::ArrayPool_1<int32_t> System::Buffers::ArrayPool_1<int32_t>::__get__Shared_k__BackingField()  {
return ::cordl_internals::getStaticField<System::Buffers::ArrayPool_1<int32_t>, "<Shared>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPool_1<int32_t>>::get>();
}
 System::Buffers::ArrayPool_1<int32_t> System::Buffers::ArrayPool_1<int32_t>::get_Shared()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPool_1<int32_t>>::get(),
                            "get_Shared",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Buffers::ArrayPool_1<int32_t>, false>(nullptr, ___internal_method);
}
 ::ArrayW<int32_t> System::Buffers::ArrayPool_1<int32_t>::Rent(int32_t minimumLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPool_1<int32_t>>::get(),
                            "Rent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>, false>(const_cast<void*>(instance), ___internal_method, minimumLength);
}
/// @param clearArray: bool (default: false)
 void System::Buffers::ArrayPool_1<int32_t>::Return(::ArrayW<int32_t> array, bool clearArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPool_1<int32_t>>::get(),
                            "Return",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array, clearArray);
}
// Ctor Parameters []
 System::Buffers::ArrayPool_1<int32_t>::ArrayPool_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ArrayPool_1>())) {}
 void System::Buffers::ArrayPool_1<int32_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPool_1<int32_t>>::get(),
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
// Ctor Parameters []
 System::Buffers::ArrayPool_1<char16_t>::ArrayPool_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ArrayPool_1>())) {}
 void System::Buffers::ArrayPool_1<char16_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPool_1<char16_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Buffers::ArrayPool_1<uint8_t>.get_Shared
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Buffers::ArrayPool_1<uint8_t> (*)()>(&System::Buffers::ArrayPool_1<uint8_t>::get_Shared)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPool_1<uint8_t>>::get(),
                            "get_Shared",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Buffers::ArrayPool_1<uint8_t>.Rent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Buffers::ArrayPool_1<uint8_t>::*)(int32_t)>(&System::Buffers::ArrayPool_1<uint8_t>::Rent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Buffers::ArrayPool_1<uint8_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPool_1>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Buffers::ArrayPool_1<uint8_t>.Return
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Buffers::ArrayPool_1<uint8_t>::*)(::ArrayW<uint8_t>, bool)>(&System::Buffers::ArrayPool_1<uint8_t>::Return)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Buffers::ArrayPool_1<uint8_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPool_1>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Buffers::ArrayPool_1<uint8_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Buffers::ArrayPool_1<uint8_t>::*)()>(&System::Buffers::ArrayPool_1<uint8_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPool_1<uint8_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void System::Buffers::ArrayPool_1<uint8_t>::__set__Shared_k__BackingField(System::Buffers::ArrayPool_1<uint8_t> value)  {
::cordl_internals::setStaticField<System::Buffers::ArrayPool_1<uint8_t>, "<Shared>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPool_1<uint8_t>>::get>(std::forward<System::Buffers::ArrayPool_1<uint8_t>>(value));
}
 System::Buffers::ArrayPool_1<uint8_t> System::Buffers::ArrayPool_1<uint8_t>::__get__Shared_k__BackingField()  {
return ::cordl_internals::getStaticField<System::Buffers::ArrayPool_1<uint8_t>, "<Shared>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPool_1<uint8_t>>::get>();
}
 System::Buffers::ArrayPool_1<uint8_t> System::Buffers::ArrayPool_1<uint8_t>::get_Shared()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPool_1<uint8_t>>::get(),
                            "get_Shared",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Buffers::ArrayPool_1<uint8_t>, false>(nullptr, ___internal_method);
}
 ::ArrayW<uint8_t> System::Buffers::ArrayPool_1<uint8_t>::Rent(int32_t minimumLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPool_1<uint8_t>>::get(),
                            "Rent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, minimumLength);
}
/// @param clearArray: bool (default: false)
 void System::Buffers::ArrayPool_1<uint8_t>::Return(::ArrayW<uint8_t> array, bool clearArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPool_1<uint8_t>>::get(),
                            "Return",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array, clearArray);
}
// Ctor Parameters []
 System::Buffers::ArrayPool_1<uint8_t>::ArrayPool_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ArrayPool_1>())) {}
 void System::Buffers::ArrayPool_1<uint8_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Buffers::ArrayPool_1<uint8_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
