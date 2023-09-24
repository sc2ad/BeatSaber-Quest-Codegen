#pragma once
#include "System/Resources/zzzz__ResourceManager_def.hpp"
#include "System/Reflection/zzzz__AssemblyName_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Reflection/zzzz__RuntimeAssembly_def.hpp"
#include "System/Resources/zzzz__ResourceManager_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Resources/zzzz__ResourceSet_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Resources/zzzz__UltimateResourceFallbackLocation_def.hpp"
#include "System/Resources/zzzz__IResourceGroveler_def.hpp"
//  Writing Method size for method: System::Resources::System__Resources__ResourceManager__CultureNameResourceSetPair._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Resources::System__Resources__ResourceManager__CultureNameResourceSetPair::*)()>(&System::Resources::System__Resources__ResourceManager__CultureNameResourceSetPair::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2373910;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::System__Resources__ResourceManager__CultureNameResourceSetPair>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 System::Resources::System__Resources__ResourceManager__CultureNameResourceSetPair System::Resources::System__Resources__ResourceManager__CultureNameResourceSetPair::New_ctor()  {
System::Resources::System__Resources__ResourceManager__CultureNameResourceSetPair o{THROW_UNLESS(::il2cpp_utils::New<System::Resources::System__Resources__ResourceManager__CultureNameResourceSetPair>())};
return o;
}
 void System::Resources::System__Resources__ResourceManager__CultureNameResourceSetPair::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::System__Resources__ResourceManager__CultureNameResourceSetPair>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Resources::System__Resources__ResourceManager__ResourceManagerMediator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Resources::System__Resources__ResourceManager__ResourceManagerMediator::*)(System::Resources::ResourceManager)>(&System::Resources::System__Resources__ResourceManager__ResourceManagerMediator::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2373918;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::System__Resources__ResourceManager__ResourceManagerMediator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Resources::ResourceManager>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Resources::System__Resources__ResourceManager__ResourceManagerMediator::__set__rm(System::Resources::ResourceManager value)  {
::cordl_internals::setInstanceField<System::Resources::ResourceManager, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Resources::ResourceManager>(value));
}
constexpr System::Resources::ResourceManager System::Resources::System__Resources__ResourceManager__ResourceManagerMediator::__get__rm() const {
return ::cordl_internals::getInstanceField<System::Resources::ResourceManager, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Resources::System__Resources__ResourceManager__ResourceManagerMediator System::Resources::System__Resources__ResourceManager__ResourceManagerMediator::New_ctor(System::Resources::ResourceManager rm)  {
System::Resources::System__Resources__ResourceManager__ResourceManagerMediator o{THROW_UNLESS(::il2cpp_utils::New<System::Resources::System__Resources__ResourceManager__ResourceManagerMediator>(rm))};
return o;
}
 void System::Resources::System__Resources__ResourceManager__ResourceManagerMediator::_ctor(System::Resources::ResourceManager rm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::System__Resources__ResourceManager__ResourceManagerMediator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Resources::ResourceManager>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rm);
}
//  Writing Method size for method: System::Resources::ResourceManager.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Resources::ResourceManager::*)()>(&System::Resources::ResourceManager::Init)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2373720;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceManager>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Resources::ResourceManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Resources::ResourceManager::*)()>(&System::Resources::ResourceManager::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x237383c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Resources::ResourceManager.OnDeserializing
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Resources::ResourceManager::*)(System::Runtime::Serialization::StreamingContext)>(&System::Resources::ResourceManager::OnDeserializing)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2373990;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceManager>::get(),
                            "OnDeserializing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Resources::ResourceManager.OnDeserialized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Resources::ResourceManager::*)(System::Runtime::Serialization::StreamingContext)>(&System::Resources::ResourceManager::OnDeserialized)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x23739a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceManager>::get(),
                            "OnDeserialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Resources::ResourceManager.OnSerializing
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Resources::ResourceManager::*)(System::Runtime::Serialization::StreamingContext)>(&System::Resources::ResourceManager::OnSerializing)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2373b6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceManager>::get(),
                            "OnSerializing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Resources::ResourceManager.CompareNames
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::StringW, System::Reflection::AssemblyName)>(&System::Resources::ResourceManager::CompareNames)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x2373bdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceManager>::get(),
                            "CompareNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::AssemblyName>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Resources::ResourceManager::__set_ResourceSets(System::Collections::Hashtable value)  {
::cordl_internals::setInstanceField<System::Collections::Hashtable, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Hashtable>(value));
}
constexpr System::Collections::Hashtable System::Resources::ResourceManager::__get_ResourceSets() const {
return ::cordl_internals::getInstanceField<System::Collections::Hashtable, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Resources::ResourceManager::__set__resourceSets(System::Collections::Generic::Dictionary_2<::StringW,System::Resources::ResourceSet> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<::StringW,System::Resources::ResourceSet>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<::StringW,System::Resources::ResourceSet>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<::StringW,System::Resources::ResourceSet> System::Resources::ResourceManager::__get__resourceSets() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<::StringW,System::Resources::ResourceSet>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Resources::ResourceManager::__set_MainAssembly(System::Reflection::Assembly value)  {
::cordl_internals::setInstanceField<System::Reflection::Assembly, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Reflection::Assembly>(value));
}
constexpr System::Reflection::Assembly System::Resources::ResourceManager::__get_MainAssembly() const {
return ::cordl_internals::getInstanceField<System::Reflection::Assembly, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Resources::ResourceManager::__set__neutralResourcesCulture(System::Globalization::CultureInfo value)  {
::cordl_internals::setInstanceField<System::Globalization::CultureInfo, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Globalization::CultureInfo>(value));
}
constexpr System::Globalization::CultureInfo System::Resources::ResourceManager::__get__neutralResourcesCulture() const {
return ::cordl_internals::getInstanceField<System::Globalization::CultureInfo, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Resources::ResourceManager::__set__lastUsedResourceCache(System::Resources::System__Resources__ResourceManager__CultureNameResourceSetPair value)  {
::cordl_internals::setInstanceField<System::Resources::System__Resources__ResourceManager__CultureNameResourceSetPair, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Resources::System__Resources__ResourceManager__CultureNameResourceSetPair>(value));
}
constexpr System::Resources::System__Resources__ResourceManager__CultureNameResourceSetPair System::Resources::ResourceManager::__get__lastUsedResourceCache() const {
return ::cordl_internals::getInstanceField<System::Resources::System__Resources__ResourceManager__CultureNameResourceSetPair, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Resources::ResourceManager::__set_UseManifest(bool value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Resources::ResourceManager::__get_UseManifest() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Resources::ResourceManager::__set_UseSatelliteAssem(bool value)  {
::cordl_internals::setInstanceField<bool, 0x39>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Resources::ResourceManager::__get_UseSatelliteAssem() const {
return ::cordl_internals::getInstanceField<bool, 0x39>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Resources::ResourceManager::__set__fallbackLoc(System::Resources::UltimateResourceFallbackLocation value)  {
::cordl_internals::setInstanceField<System::Resources::UltimateResourceFallbackLocation, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Resources::UltimateResourceFallbackLocation>(value));
}
constexpr System::Resources::UltimateResourceFallbackLocation System::Resources::ResourceManager::__get__fallbackLoc() const {
return ::cordl_internals::getInstanceField<System::Resources::UltimateResourceFallbackLocation, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Resources::ResourceManager::__set__callingAssembly(System::Reflection::Assembly value)  {
::cordl_internals::setInstanceField<System::Reflection::Assembly, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Reflection::Assembly>(value));
}
constexpr System::Reflection::Assembly System::Resources::ResourceManager::__get__callingAssembly() const {
return ::cordl_internals::getInstanceField<System::Reflection::Assembly, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Resources::ResourceManager::__set_m_callingAssembly(System::Reflection::RuntimeAssembly value)  {
::cordl_internals::setInstanceField<System::Reflection::RuntimeAssembly, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Reflection::RuntimeAssembly>(value));
}
constexpr System::Reflection::RuntimeAssembly System::Resources::ResourceManager::__get_m_callingAssembly() const {
return ::cordl_internals::getInstanceField<System::Reflection::RuntimeAssembly, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Resources::ResourceManager::__set_resourceGroveler(System::Resources::IResourceGroveler value)  {
::cordl_internals::setInstanceField<System::Resources::IResourceGroveler, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Resources::IResourceGroveler>(value));
}
constexpr System::Resources::IResourceGroveler System::Resources::ResourceManager::__get_resourceGroveler() const {
return ::cordl_internals::getInstanceField<System::Resources::IResourceGroveler, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Resources::ResourceManager::__set_MagicNumber(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "MagicNumber", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceManager>::get>(std::forward<int32_t>(value));
}
 int32_t System::Resources::ResourceManager::__get_MagicNumber()  {
return ::cordl_internals::getStaticField<int32_t, "MagicNumber", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceManager>::get>();
}
 void System::Resources::ResourceManager::__set_HeaderVersionNumber(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "HeaderVersionNumber", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceManager>::get>(std::forward<int32_t>(value));
}
 int32_t System::Resources::ResourceManager::__get_HeaderVersionNumber()  {
return ::cordl_internals::getStaticField<int32_t, "HeaderVersionNumber", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceManager>::get>();
}
 void System::Resources::ResourceManager::__set__minResourceSet(System::Type value)  {
::cordl_internals::setStaticField<System::Type, "_minResourceSet", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceManager>::get>(std::forward<System::Type>(value));
}
 System::Type System::Resources::ResourceManager::__get__minResourceSet()  {
return ::cordl_internals::getStaticField<System::Type, "_minResourceSet", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceManager>::get>();
}
 void System::Resources::ResourceManager::__set_ResReaderTypeName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "ResReaderTypeName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceManager>::get>(std::forward<::StringW>(value));
}
 ::StringW System::Resources::ResourceManager::__get_ResReaderTypeName()  {
return ::cordl_internals::getStaticField<::StringW, "ResReaderTypeName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceManager>::get>();
}
 void System::Resources::ResourceManager::__set_ResSetTypeName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "ResSetTypeName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceManager>::get>(std::forward<::StringW>(value));
}
 ::StringW System::Resources::ResourceManager::__get_ResSetTypeName()  {
return ::cordl_internals::getStaticField<::StringW, "ResSetTypeName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceManager>::get>();
}
 void System::Resources::ResourceManager::__set_MscorlibName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "MscorlibName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceManager>::get>(std::forward<::StringW>(value));
}
 ::StringW System::Resources::ResourceManager::__get_MscorlibName()  {
return ::cordl_internals::getStaticField<::StringW, "MscorlibName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceManager>::get>();
}
 void System::Resources::ResourceManager::__set_DEBUG(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "DEBUG", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceManager>::get>(std::forward<int32_t>(value));
}
 int32_t System::Resources::ResourceManager::__get_DEBUG()  {
return ::cordl_internals::getStaticField<int32_t, "DEBUG", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceManager>::get>();
}
 void System::Resources::ResourceManager::Init()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceManager>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Resources::ResourceManager System::Resources::ResourceManager::New_ctor()  {
System::Resources::ResourceManager o{THROW_UNLESS(::il2cpp_utils::New<System::Resources::ResourceManager>())};
return o;
}
 void System::Resources::ResourceManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Resources::ResourceManager::OnDeserializing(System::Runtime::Serialization::StreamingContext ctx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceManager>::get(),
                            "OnDeserializing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ctx);
}
 void System::Resources::ResourceManager::OnDeserialized(System::Runtime::Serialization::StreamingContext ctx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceManager>::get(),
                            "OnDeserialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ctx);
}
 void System::Resources::ResourceManager::OnSerializing(System::Runtime::Serialization::StreamingContext ctx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceManager>::get(),
                            "OnSerializing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ctx);
}
 bool System::Resources::ResourceManager::CompareNames(::StringW asmTypeName1, ::StringW typeName2, System::Reflection::AssemblyName asmName2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ResourceManager>::get(),
                            "CompareNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::AssemblyName>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, asmTypeName1, typeName2, asmName2);
}
