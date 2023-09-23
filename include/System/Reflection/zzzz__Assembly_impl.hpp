#pragma once
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/InteropServices/zzzz___Assembly_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Reflection/zzzz__Module_def.hpp"
#include "System/Reflection/zzzz__AssemblyName_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Security/Policy/zzzz__Evidence_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Reflection/zzzz__ICustomAttributeProvider_def.hpp"
//  Writing Method size for method: System::Reflection::System__Reflection__Assembly__ResolveEventHolder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::System__Reflection__Assembly__ResolveEventHolder::*)()>(&System::Reflection::System__Reflection__Assembly__ResolveEventHolder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2382244;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::System__Reflection__Assembly__ResolveEventHolder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 System::Reflection::System__Reflection__Assembly__ResolveEventHolder::System__Reflection__Assembly__ResolveEventHolder()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<System__Reflection__Assembly__ResolveEventHolder>())) {}
 void System::Reflection::System__Reflection__Assembly__ResolveEventHolder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::System__Reflection__Assembly__ResolveEventHolder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Reflection::Assembly.get_CodeBase
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Reflection::Assembly::*)()>(&System::Reflection::Assembly::get_CodeBase)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2381c54;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::Assembly),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::Assembly.get_FullName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Reflection::Assembly::*)()>(&System::Reflection::Assembly::get_FullName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2381c94;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::Assembly),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::Assembly.get_MonoAssembly
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (System::Reflection::Assembly::*)()>(&System::Reflection::Assembly::get_MonoAssembly)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2381cd4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::Assembly),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::Assembly.GetObjectData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::Assembly::*)(System::Runtime::Serialization::SerializationInfo, System::Runtime::Serialization::StreamingContext)>(&System::Reflection::Assembly::GetObjectData)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2381d14;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::Assembly),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::Assembly.IsDefined
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::Assembly::*)(System::Type, bool)>(&System::Reflection::Assembly::IsDefined)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2381d54;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::Assembly),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::Assembly.GetCustomAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::bs_hook::Il2CppWrapperType> (System::Reflection::Assembly::*)(bool)>(&System::Reflection::Assembly::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2381d94;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::Assembly),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::Assembly.GetCustomAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::bs_hook::Il2CppWrapperType> (System::Reflection::Assembly::*)(System::Type, bool)>(&System::Reflection::Assembly::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2381dd4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::Assembly),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::Assembly.GetTypes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Type> (System::Reflection::Assembly::*)(bool)>(&System::Reflection::Assembly::GetTypes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2381e14;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::Assembly),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::Assembly.GetTypes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Type> (System::Reflection::Assembly::*)()>(&System::Reflection::Assembly::GetTypes)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2381e1c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::Assembly),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::Assembly.GetType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (System::Reflection::Assembly::*)(::StringW)>(&System::Reflection::Assembly::GetType)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2381e30;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::Assembly),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::Assembly.InternalGetType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (System::Reflection::Assembly::*)(System::Reflection::Module, ::StringW, bool, bool)>(&System::Reflection::Assembly::InternalGetType)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2381e48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                            "InternalGetType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Module>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::Assembly.GetName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::AssemblyName (System::Reflection::Assembly::*)(bool)>(&System::Reflection::Assembly::GetName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2381e54;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::Assembly),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::Assembly.GetName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::AssemblyName (System::Reflection::Assembly::*)()>(&System::Reflection::Assembly::GetName)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2381e94;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::Assembly),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::Assembly.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Reflection::Assembly::*)()>(&System::Reflection::Assembly::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2381ea8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::Assembly),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::Assembly.GetAssembly
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::Assembly (*)(System::Type)>(&System::Reflection::Assembly::GetAssembly)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2381eb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                            "GetAssembly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::Assembly.Load
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::Assembly (*)(::StringW)>(&System::Reflection::Assembly::Load)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2381f78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                            "Load",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::Assembly.ReflectionOnlyLoad
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::Assembly (*)(::StringW)>(&System::Reflection::Assembly::ReflectionOnlyLoad)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2381fa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                            "ReflectionOnlyLoad",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::Assembly.load_with_partial_name
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::Assembly (*)(::StringW, System::Security::Policy::Evidence)>(&System::Reflection::Assembly::load_with_partial_name)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2381fe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                            "load_with_partial_name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Policy::Evidence>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::Assembly.LoadWithPartialName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::Assembly (*)(::StringW, System::Security::Policy::Evidence)>(&System::Reflection::Assembly::LoadWithPartialName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2381fec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                            "LoadWithPartialName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Policy::Evidence>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::Assembly.LoadWithPartialName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::Assembly (*)(::StringW, System::Security::Policy::Evidence, bool)>(&System::Reflection::Assembly::LoadWithPartialName)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2381ff4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                            "LoadWithPartialName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Policy::Evidence>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::Assembly.GetModulesInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Reflection::Module> (System::Reflection::Assembly::*)()>(&System::Reflection::Assembly::GetModulesInternal)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x238206c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::Assembly),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::Assembly.GetExecutingAssembly
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::Assembly (*)()>(&System::Reflection::Assembly::GetExecutingAssembly)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x23820ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                            "GetExecutingAssembly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::Assembly.GetCallingAssembly
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::Assembly (*)()>(&System::Reflection::Assembly::GetCallingAssembly)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2373838;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                            "GetCallingAssembly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::Assembly.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Reflection::Assembly::*)()>(&System::Reflection::Assembly::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23820ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::Assembly),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::Assembly.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::Assembly::*)(::bs_hook::Il2CppWrapperType)>(&System::Reflection::Assembly::Equals)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23820f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::Assembly),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::Assembly.CreateNIE
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception (*)()>(&System::Reflection::Assembly::CreateNIE)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x23820fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                            "CreateNIE",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::Assembly.get_IsFullyTrusted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::Assembly::*)()>(&System::Reflection::Assembly::get_IsFullyTrusted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2382170;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                            "get_IsFullyTrusted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::Assembly.GetType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (System::Reflection::Assembly::*)(::StringW, bool, bool)>(&System::Reflection::Assembly::GetType)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2382178;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::Assembly),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::Assembly.GetModule
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::Module (System::Reflection::Assembly::*)(::StringW)>(&System::Reflection::Assembly::GetModule)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x238219c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::Assembly),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::Assembly.GetModules
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Reflection::Module> (System::Reflection::Assembly::*)(bool)>(&System::Reflection::Assembly::GetModules)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x23821c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::Assembly),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::Assembly.op_Equality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Reflection::Assembly, System::Reflection::Assembly)>(&System::Reflection::Assembly::op_Equality)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x23736d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Assembly>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Assembly>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::Assembly.op_Inequality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Reflection::Assembly, System::Reflection::Assembly)>(&System::Reflection::Assembly::op_Inequality)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23821e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                            "op_Inequality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Assembly>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Assembly>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::Assembly._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::Assembly::*)()>(&System::Reflection::Assembly::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x238223c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Reflection::ICustomAttributeProvider
constexpr  System::Reflection::Assembly::operator System::Reflection::ICustomAttributeProvider() const noexcept {
return System::Reflection::ICustomAttributeProvider(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr  System::Reflection::Assembly::operator System::Runtime::Serialization::ISerializable() const noexcept {
return System::Runtime::Serialization::ISerializable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Runtime::InteropServices::_Assembly
constexpr  System::Reflection::Assembly::operator System::Runtime::InteropServices::_Assembly() const noexcept {
return System::Runtime::InteropServices::_Assembly(::bs_hook::Il2CppWrapperType::instance);
}
 ::StringW System::Reflection::Assembly::get_CodeBase()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                            "get_CodeBase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Reflection::Assembly::get_FullName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                            "get_FullName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::cordl_internals::intptr_t System::Reflection::Assembly::get_MonoAssembly()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                            "get_MonoAssembly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Reflection::Assembly::GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                            "GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, info, context);
}
 bool System::Reflection::Assembly::IsDefined(System::Type attributeType, bool inherit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                            "IsDefined",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, attributeType, inherit);
}
 ::ArrayW<::bs_hook::Il2CppWrapperType> System::Reflection::Assembly::GetCustomAttributes(bool inherit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                            "GetCustomAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::bs_hook::Il2CppWrapperType>, false>(const_cast<void*>(instance), ___internal_method, inherit);
}
 ::ArrayW<::bs_hook::Il2CppWrapperType> System::Reflection::Assembly::GetCustomAttributes(System::Type attributeType, bool inherit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                            "GetCustomAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::bs_hook::Il2CppWrapperType>, false>(const_cast<void*>(instance), ___internal_method, attributeType, inherit);
}
 ::ArrayW<System::Type> System::Reflection::Assembly::GetTypes(bool exportedOnly)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                            "GetTypes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Type>, false>(const_cast<void*>(instance), ___internal_method, exportedOnly);
}
 ::ArrayW<System::Type> System::Reflection::Assembly::GetTypes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                            "GetTypes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Type>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Type System::Reflection::Assembly::GetType(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                            "GetType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method, name);
}
 System::Type System::Reflection::Assembly::InternalGetType(System::Reflection::Module module, ::StringW name, bool throwOnError, bool ignoreCase)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                            "InternalGetType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Module>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method, module, name, throwOnError, ignoreCase);
}
 System::Reflection::AssemblyName System::Reflection::Assembly::GetName(bool copiedName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                            "GetName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::AssemblyName, false>(const_cast<void*>(instance), ___internal_method, copiedName);
}
 System::Reflection::AssemblyName System::Reflection::Assembly::GetName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                            "GetName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::AssemblyName, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Reflection::Assembly::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Reflection::Assembly System::Reflection::Assembly::GetAssembly(System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                            "GetAssembly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::Assembly, false>(nullptr, ___internal_method, type);
}
 System::Reflection::Assembly System::Reflection::Assembly::Load(::StringW assemblyString)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                            "Load",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::Assembly, false>(nullptr, ___internal_method, assemblyString);
}
 System::Reflection::Assembly System::Reflection::Assembly::ReflectionOnlyLoad(::StringW assemblyString)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                            "ReflectionOnlyLoad",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::Assembly, false>(nullptr, ___internal_method, assemblyString);
}
 System::Reflection::Assembly System::Reflection::Assembly::load_with_partial_name(::StringW name, System::Security::Policy::Evidence e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                            "load_with_partial_name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Policy::Evidence>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::Assembly, false>(nullptr, ___internal_method, name, e);
}
 System::Reflection::Assembly System::Reflection::Assembly::LoadWithPartialName(::StringW partialName, System::Security::Policy::Evidence securityEvidence)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                            "LoadWithPartialName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Policy::Evidence>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::Assembly, false>(nullptr, ___internal_method, partialName, securityEvidence);
}
 System::Reflection::Assembly System::Reflection::Assembly::LoadWithPartialName(::StringW partialName, System::Security::Policy::Evidence securityEvidence, bool oldBehavior)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                            "LoadWithPartialName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Policy::Evidence>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::Assembly, false>(nullptr, ___internal_method, partialName, securityEvidence, oldBehavior);
}
 ::ArrayW<System::Reflection::Module> System::Reflection::Assembly::GetModulesInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                            "GetModulesInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Reflection::Module>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Reflection::Assembly System::Reflection::Assembly::GetExecutingAssembly()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                            "GetExecutingAssembly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::Assembly, false>(nullptr, ___internal_method);
}
 System::Reflection::Assembly System::Reflection::Assembly::GetCallingAssembly()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                            "GetCallingAssembly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::Assembly, false>(nullptr, ___internal_method);
}
 int32_t System::Reflection::Assembly::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Reflection::Assembly::Equals(::bs_hook::Il2CppWrapperType o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, o);
}
 System::Exception System::Reflection::Assembly::CreateNIE()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                            "CreateNIE",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Exception, false>(nullptr, ___internal_method);
}
 bool System::Reflection::Assembly::get_IsFullyTrusted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                            "get_IsFullyTrusted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Type System::Reflection::Assembly::GetType(::StringW name, bool throwOnError, bool ignoreCase)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                            "GetType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method, name, throwOnError, ignoreCase);
}
 System::Reflection::Module System::Reflection::Assembly::GetModule(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                            "GetModule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::Module, false>(const_cast<void*>(instance), ___internal_method, name);
}
 ::ArrayW<System::Reflection::Module> System::Reflection::Assembly::GetModules(bool getResourceModules)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                            "GetModules",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Reflection::Module>, false>(const_cast<void*>(instance), ___internal_method, getResourceModules);
}
 bool System::Reflection::Assembly::op_Equality(System::Reflection::Assembly left, System::Reflection::Assembly right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Assembly>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Assembly>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
 bool System::Reflection::Assembly::op_Inequality(System::Reflection::Assembly left, System::Reflection::Assembly right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                            "op_Inequality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Assembly>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Assembly>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
// Ctor Parameters []
 System::Reflection::Assembly::Assembly()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Assembly>())) {}
 void System::Reflection::Assembly::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::Assembly>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
