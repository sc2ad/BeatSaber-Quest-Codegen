#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Reflection/zzzz__Module_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
struct Guid;
}
namespace System::Reflection {
class Assembly;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Type;
}
namespace System::Reflection {
class RuntimeAssembly;
}
// Forward declare root types
namespace System::Reflection {
class RuntimeModule;
}
// Type: System.Reflection::RuntimeModule
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3473))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3517))
// CS Name: System.Reflection.RuntimeModule
class CORDL_TYPE RuntimeModule : public System::Reflection::Module {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~RuntimeModule() = default;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeModule", modifiers: " const&", def_value: None }]
constexpr RuntimeModule(RuntimeModule const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeModule", modifiers: "&&", def_value: None }]
constexpr RuntimeModule(RuntimeModule&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RuntimeModule(void* ptr) noexcept : System::Reflection::Module(ptr) {
}


  constexpr RuntimeModule& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RuntimeModule& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RuntimeModule& operator=(RuntimeModule&& o) noexcept = default;
  constexpr RuntimeModule& operator=(RuntimeModule const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get__impl, put=__set__impl))  _impl;

constexpr void __set__impl(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get__impl() const;

 System::Reflection::Assembly __declspec(property(get=__get_assembly, put=__set_assembly))  assembly;

constexpr void __set_assembly(System::Reflection::Assembly value) ;

constexpr System::Reflection::Assembly __get_assembly() const;

 ::StringW __declspec(property(get=__get_fqname, put=__set_fqname))  fqname;

constexpr void __set_fqname(::StringW value) ;

constexpr ::StringW __get_fqname() const;

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;

 ::StringW __declspec(property(get=__get_scopename, put=__set_scopename))  scopename;

constexpr void __set_scopename(::StringW value) ;

constexpr ::StringW __get_scopename() const;

 bool __declspec(property(get=__get_is_resource, put=__set_is_resource))  is_resource;

constexpr void __set_is_resource(bool value) ;

constexpr bool __get_is_resource() const;

 int32_t __declspec(property(get=__get_token, put=__set_token))  token;

constexpr void __set_token(int32_t value) ;

constexpr int32_t __get_token() const;


// Properties

 System::Reflection::Assembly __declspec(property(get=get_Assembly))  Assembly;

 ::StringW __declspec(property(get=get_ScopeName))  ScopeName;

 System::Guid __declspec(property(get=get_ModuleVersionId))  ModuleVersionId;


// Methods

/// @brief Method get_Assembly addr 0x23891f4 size 0x8 virtual true final false
 System::Reflection::Assembly get_Assembly() ;

/// @brief Method get_ScopeName addr 0x23891fc size 0x8 virtual true final false
 ::StringW get_ScopeName() ;

/// @brief Method get_ModuleVersionId addr 0x2389204 size 0x10 virtual true final false
 System::Guid get_ModuleVersionId() ;

/// @brief Method IsResource addr 0x2389214 size 0x8 virtual true final false
 bool IsResource() ;

/// @brief Method GetCustomAttributes addr 0x238921c size 0x68 virtual true final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> GetCustomAttributes(bool inherit) ;

/// @brief Method GetCustomAttributes addr 0x2389284 size 0x70 virtual true final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> GetCustomAttributes(System::Type attributeType, bool inherit) ;

/// @brief Method IsDefined addr 0x23892f4 size 0x70 virtual true final false
 bool IsDefined(System::Type attributeType, bool inherit) ;

/// @brief Method GetObjectData addr 0x2389364 size 0x98 virtual true final false
 void GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method GetRuntimeAssembly addr 0x23893fc size 0x78 virtual false final false
 System::Reflection::RuntimeAssembly GetRuntimeAssembly() ;

/// @brief Method GetModuleVersionId addr 0x2389474 size 0x80 virtual true final false
 System::Guid GetModuleVersionId() ;

/// @brief Method GetGuidInternal addr 0x23894f4 size 0x4 virtual false final false
static void GetGuidInternal(::cordl_internals::intptr_t module, ::ArrayW<uint8_t> guid) ;

static System::Reflection::RuntimeModule New_ctor() ;

/// @brief Method .ctor addr 0x23894f8 size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
NEED_NO_BOX(System::Reflection::RuntimeModule);
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::RuntimeModule, "System.Reflection", "RuntimeModule");
