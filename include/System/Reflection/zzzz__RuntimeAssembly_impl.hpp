#pragma once
#include "System/Reflection/zzzz__Assembly_impl.hpp"
#include "System/Reflection/zzzz__RuntimeAssembly_def.hpp"
#include "System/Reflection/zzzz__AssemblyName_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Security/Policy/zzzz__Evidence_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Threading/zzzz__StackCrawlMark_def.hpp"
#include "System/Reflection/zzzz__Module_def.hpp"
//  Writing Method size for method: System::Reflection::RuntimeAssembly._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::RuntimeAssembly::*)()>(&System::Reflection::RuntimeAssembly::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2384b84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeAssembly>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeAssembly.GetObjectData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::RuntimeAssembly::*)(System::Runtime::Serialization::SerializationInfo, System::Runtime::Serialization::StreamingContext)>(&System::Reflection::RuntimeAssembly::GetObjectData)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2384bf0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeAssembly),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeAssembly>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeAssembly.LoadWithPartialNameInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::RuntimeAssembly (*)(::StringW, System::Security::Policy::Evidence, ByRef<System::Threading::StackCrawlMark>)>(&System::Reflection::RuntimeAssembly::LoadWithPartialNameInternal)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2384c7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeAssembly>::get(),
                            "LoadWithPartialNameInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Policy::Evidence>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Threading::StackCrawlMark>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeAssembly.LoadWithPartialNameInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::RuntimeAssembly (*)(System::Reflection::AssemblyName, System::Security::Policy::Evidence, ByRef<System::Threading::StackCrawlMark>)>(&System::Reflection::RuntimeAssembly::LoadWithPartialNameInternal)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2384d04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeAssembly>::get(),
                            "LoadWithPartialNameInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::AssemblyName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Policy::Evidence>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Threading::StackCrawlMark>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeAssembly.GetName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::AssemblyName (System::Reflection::RuntimeAssembly::*)(bool)>(&System::Reflection::RuntimeAssembly::GetName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2384d2c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeAssembly),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeAssembly>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeAssembly.GetType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (System::Reflection::RuntimeAssembly::*)(::StringW, bool, bool)>(&System::Reflection::RuntimeAssembly::GetType)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2384d34;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeAssembly),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeAssembly>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeAssembly.GetModule
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::Module (System::Reflection::RuntimeAssembly::*)(::StringW)>(&System::Reflection::RuntimeAssembly::GetModule)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2384df8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeAssembly),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeAssembly>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeAssembly.GetModules
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Reflection::Module> (System::Reflection::RuntimeAssembly::*)(bool)>(&System::Reflection::RuntimeAssembly::GetModules)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x2384f28;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeAssembly),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeAssembly>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeAssembly.GetAotId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)()>(&System::Reflection::RuntimeAssembly::GetAotId)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23850bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeAssembly>::get(),
                            "GetAotId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeAssembly.get_code_base
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(System::Reflection::Assembly, bool)>(&System::Reflection::RuntimeAssembly::get_code_base)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2385118;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeAssembly>::get(),
                            "get_code_base",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Assembly>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeAssembly.get_fullname
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(System::Reflection::Assembly)>(&System::Reflection::RuntimeAssembly::get_fullname)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2385120;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeAssembly>::get(),
                            "get_fullname",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Assembly>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeAssembly.GetAotIdInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint8_t>)>(&System::Reflection::RuntimeAssembly::GetAotIdInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2385114;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeAssembly>::get(),
                            "GetAotIdInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeAssembly.GetCodeBase
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(System::Reflection::Assembly, bool)>(&System::Reflection::RuntimeAssembly::GetCodeBase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2385124;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeAssembly>::get(),
                            "GetCodeBase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Assembly>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeAssembly.get_CodeBase
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Reflection::RuntimeAssembly::*)()>(&System::Reflection::RuntimeAssembly::get_CodeBase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x238512c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeAssembly),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeAssembly>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeAssembly.get_FullName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Reflection::RuntimeAssembly::*)()>(&System::Reflection::RuntimeAssembly::get_FullName)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2385134;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeAssembly),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeAssembly>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeAssembly.get_MonoAssembly
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (System::Reflection::RuntimeAssembly::*)()>(&System::Reflection::RuntimeAssembly::get_MonoAssembly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2385138;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeAssembly),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeAssembly>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeAssembly.GetManifestResourceInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (System::Reflection::RuntimeAssembly::*)(::StringW, ByRef<int32_t>, ByRef<System::Reflection::Module>)>(&System::Reflection::RuntimeAssembly::GetManifestResourceInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2385140;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeAssembly>::get(),
                            "GetManifestResourceInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Reflection::Module>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeAssembly.IsDefined
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::RuntimeAssembly::*)(System::Type, bool)>(&System::Reflection::RuntimeAssembly::IsDefined)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2385144;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeAssembly),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeAssembly>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeAssembly.GetCustomAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::bs_hook::Il2CppWrapperType> (System::Reflection::RuntimeAssembly::*)(bool)>(&System::Reflection::RuntimeAssembly::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x23851b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeAssembly),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeAssembly>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeAssembly.GetCustomAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::bs_hook::Il2CppWrapperType> (System::Reflection::RuntimeAssembly::*)(System::Type, bool)>(&System::Reflection::RuntimeAssembly::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x238521c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeAssembly),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeAssembly>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeAssembly.GetModulesInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Reflection::Module> (System::Reflection::RuntimeAssembly::*)()>(&System::Reflection::RuntimeAssembly::GetModulesInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x238528c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeAssembly),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeAssembly>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeAssembly.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Reflection::RuntimeAssembly::*)()>(&System::Reflection::RuntimeAssembly::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2385290;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeAssembly),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeAssembly>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeAssembly.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::RuntimeAssembly::*)(::bs_hook::Il2CppWrapperType)>(&System::Reflection::RuntimeAssembly::Equals)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2385298;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeAssembly),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeAssembly>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeAssembly.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Reflection::RuntimeAssembly::*)()>(&System::Reflection::RuntimeAssembly::ToString)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2385338;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeAssembly),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeAssembly>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
constexpr void System::Reflection::RuntimeAssembly::__set__mono_assembly(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t System::Reflection::RuntimeAssembly::__get__mono_assembly() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Reflection::RuntimeAssembly::__set__evidence(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::Reflection::RuntimeAssembly::__get__evidence() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Reflection::RuntimeAssembly::__set_resolve_event_holder(System::Reflection::System__Reflection__Assembly__ResolveEventHolder value)  {
::cordl_internals::setInstanceField<System::Reflection::System__Reflection__Assembly__ResolveEventHolder, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Reflection::System__Reflection__Assembly__ResolveEventHolder>(value));
}
constexpr System::Reflection::System__Reflection__Assembly__ResolveEventHolder System::Reflection::RuntimeAssembly::__get_resolve_event_holder() const {
return ::cordl_internals::getInstanceField<System::Reflection::System__Reflection__Assembly__ResolveEventHolder, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Reflection::RuntimeAssembly::__set__minimum(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::Reflection::RuntimeAssembly::__get__minimum() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Reflection::RuntimeAssembly::__set__optional(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::Reflection::RuntimeAssembly::__get__optional() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Reflection::RuntimeAssembly::__set__refuse(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::Reflection::RuntimeAssembly::__get__refuse() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Reflection::RuntimeAssembly::__set__granted(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::Reflection::RuntimeAssembly::__get__granted() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Reflection::RuntimeAssembly::__set__denied(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::Reflection::RuntimeAssembly::__get__denied() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Reflection::RuntimeAssembly::__set_fromByteArray(bool value)  {
::cordl_internals::setInstanceField<bool, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Reflection::RuntimeAssembly::__get_fromByteArray() const {
return ::cordl_internals::getInstanceField<bool, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Reflection::RuntimeAssembly::__set_assemblyName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Reflection::RuntimeAssembly::__get_assemblyName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 System::Reflection::RuntimeAssembly::RuntimeAssembly()  : System::Reflection::Assembly(THROW_UNLESS(::il2cpp_utils::New<RuntimeAssembly>())) {}
 void System::Reflection::RuntimeAssembly::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeAssembly>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Reflection::RuntimeAssembly::GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeAssembly>::get(),
                            "GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, info, context);
}
 System::Reflection::RuntimeAssembly System::Reflection::RuntimeAssembly::LoadWithPartialNameInternal(::StringW partialName, System::Security::Policy::Evidence securityEvidence, ByRef<System::Threading::StackCrawlMark> stackMark)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeAssembly>::get(),
                            "LoadWithPartialNameInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Policy::Evidence>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Threading::StackCrawlMark>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::RuntimeAssembly, false>(nullptr, ___internal_method, partialName, securityEvidence, stackMark);
}
 System::Reflection::RuntimeAssembly System::Reflection::RuntimeAssembly::LoadWithPartialNameInternal(System::Reflection::AssemblyName an, System::Security::Policy::Evidence securityEvidence, ByRef<System::Threading::StackCrawlMark> stackMark)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeAssembly>::get(),
                            "LoadWithPartialNameInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::AssemblyName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Policy::Evidence>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Threading::StackCrawlMark>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::RuntimeAssembly, false>(nullptr, ___internal_method, an, securityEvidence, stackMark);
}
 System::Reflection::AssemblyName System::Reflection::RuntimeAssembly::GetName(bool copiedName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeAssembly>::get(),
                            "GetName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::AssemblyName, false>(const_cast<void*>(instance), ___internal_method, copiedName);
}
 System::Type System::Reflection::RuntimeAssembly::GetType(::StringW name, bool throwOnError, bool ignoreCase)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeAssembly>::get(),
                            "GetType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method, name, throwOnError, ignoreCase);
}
 System::Reflection::Module System::Reflection::RuntimeAssembly::GetModule(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeAssembly>::get(),
                            "GetModule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::Module, false>(const_cast<void*>(instance), ___internal_method, name);
}
 ::ArrayW<System::Reflection::Module> System::Reflection::RuntimeAssembly::GetModules(bool getResourceModules)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeAssembly>::get(),
                            "GetModules",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Reflection::Module>, false>(const_cast<void*>(instance), ___internal_method, getResourceModules);
}
 ::ArrayW<uint8_t> System::Reflection::RuntimeAssembly::GetAotId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeAssembly>::get(),
                            "GetAotId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method);
}
 ::StringW System::Reflection::RuntimeAssembly::get_code_base(System::Reflection::Assembly a, bool escaped)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeAssembly>::get(),
                            "get_code_base",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Assembly>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, a, escaped);
}
 ::StringW System::Reflection::RuntimeAssembly::get_fullname(System::Reflection::Assembly a)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeAssembly>::get(),
                            "get_fullname",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Assembly>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, a);
}
 bool System::Reflection::RuntimeAssembly::GetAotIdInternal(::ArrayW<uint8_t> aotid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeAssembly>::get(),
                            "GetAotIdInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, aotid);
}
 ::StringW System::Reflection::RuntimeAssembly::GetCodeBase(System::Reflection::Assembly a, bool escaped)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeAssembly>::get(),
                            "GetCodeBase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Assembly>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, a, escaped);
}
 ::StringW System::Reflection::RuntimeAssembly::get_CodeBase()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeAssembly>::get(),
                            "get_CodeBase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Reflection::RuntimeAssembly::get_FullName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeAssembly>::get(),
                            "get_FullName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::cordl_internals::intptr_t System::Reflection::RuntimeAssembly::get_MonoAssembly()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeAssembly>::get(),
                            "get_MonoAssembly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::cordl_internals::intptr_t System::Reflection::RuntimeAssembly::GetManifestResourceInternal(::StringW name, ByRef<int32_t> size, ByRef<System::Reflection::Module> module)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeAssembly>::get(),
                            "GetManifestResourceInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Reflection::Module>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(const_cast<void*>(instance), ___internal_method, name, size, module);
}
 bool System::Reflection::RuntimeAssembly::IsDefined(System::Type attributeType, bool inherit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeAssembly>::get(),
                            "IsDefined",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, attributeType, inherit);
}
 ::ArrayW<::bs_hook::Il2CppWrapperType> System::Reflection::RuntimeAssembly::GetCustomAttributes(bool inherit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeAssembly>::get(),
                            "GetCustomAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::bs_hook::Il2CppWrapperType>, false>(const_cast<void*>(instance), ___internal_method, inherit);
}
 ::ArrayW<::bs_hook::Il2CppWrapperType> System::Reflection::RuntimeAssembly::GetCustomAttributes(System::Type attributeType, bool inherit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeAssembly>::get(),
                            "GetCustomAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::bs_hook::Il2CppWrapperType>, false>(const_cast<void*>(instance), ___internal_method, attributeType, inherit);
}
 ::ArrayW<System::Reflection::Module> System::Reflection::RuntimeAssembly::GetModulesInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeAssembly>::get(),
                            "GetModulesInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Reflection::Module>, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Reflection::RuntimeAssembly::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeAssembly>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Reflection::RuntimeAssembly::Equals(::bs_hook::Il2CppWrapperType o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeAssembly>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, o);
}
 ::StringW System::Reflection::RuntimeAssembly::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeAssembly>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
