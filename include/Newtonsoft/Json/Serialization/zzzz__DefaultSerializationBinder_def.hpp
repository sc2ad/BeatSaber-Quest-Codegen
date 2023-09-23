#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationBinder_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
class Type;
}
namespace Newtonsoft::Json::Utilities {
template<typename TKey,typename TValue>
class ThreadSafeStore_2;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class DefaultSerializationBinder;
}
namespace Newtonsoft::Json::Serialization {
struct Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey;
}
// Type: ::TypeNameKey
namespace Newtonsoft::Json::Serialization {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11872))
// CS Name: Newtonsoft.Json.Serialization.DefaultSerializationBinder::TypeNameKey
struct CORDL_TYPE Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "AssemblyName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "TypeName", ty: "::StringW", modifiers: "", def_value: None }]
constexpr Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey(::StringW AssemblyName, ::StringW TypeName) noexcept;


                    constexpr Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey(Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey const&) = default;
                    constexpr Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey(Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey&&) = default;
                    constexpr Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey& operator=(Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey& operator=(Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_AssemblyName, put=__set_AssemblyName))  AssemblyName;

constexpr void __set_AssemblyName(::StringW value) ;

constexpr ::StringW __get_AssemblyName() const;

 ::StringW __declspec(property(get=__get_TypeName, put=__set_TypeName))  TypeName;

constexpr void __set_TypeName(::StringW value) ;

constexpr ::StringW __get_TypeName() const;


// Methods

/// @brief Method .ctor addr 0x24ff62c size 0x8 virtual false final false
 void _ctor(::StringW assemblyName, ::StringW typeName) ;

/// @brief Method GetHashCode addr 0x24ff75c size 0x50 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x24ff7ac size 0x78 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x24ff824 size 0x48 virtual false final false
 bool Equals(Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Serialization
// Type: Newtonsoft.Json.Serialization::DefaultSerializationBinder
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3202))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11873))
// CS Name: Newtonsoft.Json.Serialization.DefaultSerializationBinder
class CORDL_TYPE DefaultSerializationBinder : public System::Runtime::Serialization::SerializationBinder {
public:
// Declarations
using TypeNameKey = Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DefaultSerializationBinder() = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultSerializationBinder", modifiers: " const&", def_value: None }]
constexpr DefaultSerializationBinder(DefaultSerializationBinder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultSerializationBinder", modifiers: "&&", def_value: None }]
constexpr DefaultSerializationBinder(DefaultSerializationBinder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DefaultSerializationBinder(void* ptr) noexcept : System::Runtime::Serialization::SerializationBinder(ptr) {
}


  constexpr DefaultSerializationBinder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DefaultSerializationBinder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DefaultSerializationBinder& operator=(DefaultSerializationBinder&& o) noexcept = default;
  constexpr DefaultSerializationBinder& operator=(DefaultSerializationBinder const& o) noexcept = default;
                


// Fields

static Newtonsoft::Json::Serialization::DefaultSerializationBinder __declspec(property(get=__get_Instance, put=__set_Instance))  Instance;

static void __set_Instance(Newtonsoft::Json::Serialization::DefaultSerializationBinder value) ;

static Newtonsoft::Json::Serialization::DefaultSerializationBinder __get_Instance() ;

 Newtonsoft::Json::Utilities::ThreadSafeStore_2<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,System::Type> __declspec(property(get=__get__typeCache, put=__set__typeCache))  _typeCache;

constexpr void __set__typeCache(Newtonsoft::Json::Utilities::ThreadSafeStore_2<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,System::Type> value) ;

constexpr Newtonsoft::Json::Utilities::ThreadSafeStore_2<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,System::Type> __get__typeCache() const;


// Methods

/// @brief Method GetTypeFromTypeNameKey addr 0x24ff3a4 size 0x220 virtual false final false
static System::Type GetTypeFromTypeNameKey(Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey typeNameKey) ;

/// @brief Method BindToType addr 0x24ff5c4 size 0x68 virtual true final false
 System::Type BindToType(::StringW assemblyName, ::StringW typeName) ;

// Ctor Parameters []
explicit DefaultSerializationBinder() ;

/// @brief Method .ctor addr 0x24ff634 size 0xc8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Serialization
NEED_NO_BOX(Newtonsoft::Json::Serialization::DefaultSerializationBinder);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Serialization::DefaultSerializationBinder, "Newtonsoft.Json.Serialization", "DefaultSerializationBinder");
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey, "Newtonsoft.Json.Serialization", "DefaultSerializationBinder/TypeNameKey");
