#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Xml::Linq {
class XNamespace;
}
// Forward declare root types
namespace System::Xml::Linq {
class System__Xml__Linq__NamespaceResolver__NamespaceDeclaration;
}
namespace System::Xml::Linq {
struct NamespaceResolver;
}
// Type: ::NamespaceDeclaration
namespace System::Xml::Linq {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15423))
// CS Name: System.Xml.Linq.NamespaceResolver::NamespaceDeclaration
class CORDL_TYPE System__Xml__Linq__NamespaceResolver__NamespaceDeclaration : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~System__Xml__Linq__NamespaceResolver__NamespaceDeclaration() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Xml__Linq__NamespaceResolver__NamespaceDeclaration", modifiers: " const&", def_value: None }]
constexpr System__Xml__Linq__NamespaceResolver__NamespaceDeclaration(System__Xml__Linq__NamespaceResolver__NamespaceDeclaration const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Xml__Linq__NamespaceResolver__NamespaceDeclaration", modifiers: "&&", def_value: None }]
constexpr System__Xml__Linq__NamespaceResolver__NamespaceDeclaration(System__Xml__Linq__NamespaceResolver__NamespaceDeclaration&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Xml__Linq__NamespaceResolver__NamespaceDeclaration(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Xml__Linq__NamespaceResolver__NamespaceDeclaration& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Xml__Linq__NamespaceResolver__NamespaceDeclaration& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Xml__Linq__NamespaceResolver__NamespaceDeclaration& operator=(System__Xml__Linq__NamespaceResolver__NamespaceDeclaration&& o) noexcept = default;
  constexpr System__Xml__Linq__NamespaceResolver__NamespaceDeclaration& operator=(System__Xml__Linq__NamespaceResolver__NamespaceDeclaration const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_prefix, put=__set_prefix))  prefix;

constexpr void __set_prefix(::StringW value) ;

constexpr ::StringW __get_prefix() const;

 System::Xml::Linq::XNamespace __declspec(property(get=__get_ns, put=__set_ns))  ns;

constexpr void __set_ns(System::Xml::Linq::XNamespace value) ;

constexpr System::Xml::Linq::XNamespace __get_ns() const;

 int32_t __declspec(property(get=__get_scope, put=__set_scope))  scope;

constexpr void __set_scope(int32_t value) ;

constexpr int32_t __get_scope() const;

 System::Xml::Linq::System__Xml__Linq__NamespaceResolver__NamespaceDeclaration __declspec(property(get=__get_prev, put=__set_prev))  prev;

constexpr void __set_prev(System::Xml::Linq::System__Xml__Linq__NamespaceResolver__NamespaceDeclaration value) ;

constexpr System::Xml::Linq::System__Xml__Linq__NamespaceResolver__NamespaceDeclaration __get_prev() const;


// Methods

// Ctor Parameters []
explicit System__Xml__Linq__NamespaceResolver__NamespaceDeclaration() ;

/// @brief Method .ctor addr 0x26cd6d8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Linq
// Type: System.Xml.Linq::NamespaceResolver
namespace System::Xml::Linq {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15424))
// CS Name: System.Xml.Linq.NamespaceResolver
struct CORDL_TYPE NamespaceResolver : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using NamespaceDeclaration = System::Xml::Linq::System__Xml__Linq__NamespaceResolver__NamespaceDeclaration;

// Ctor Parameters [CppParam { name: "_scope", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_declaration", ty: "System::Xml::Linq::System__Xml__Linq__NamespaceResolver__NamespaceDeclaration", modifiers: "", def_value: None }, CppParam { name: "_rover", ty: "System::Xml::Linq::System__Xml__Linq__NamespaceResolver__NamespaceDeclaration", modifiers: "", def_value: None }]
constexpr NamespaceResolver(int32_t _scope, System::Xml::Linq::System__Xml__Linq__NamespaceResolver__NamespaceDeclaration _declaration, System::Xml::Linq::System__Xml__Linq__NamespaceResolver__NamespaceDeclaration _rover) noexcept;


                    constexpr NamespaceResolver(NamespaceResolver const&) = default;
                    constexpr NamespaceResolver(NamespaceResolver&&) = default;
                    constexpr NamespaceResolver& operator=(NamespaceResolver const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NamespaceResolver& operator=(NamespaceResolver&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NamespaceResolver(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get__scope, put=__set__scope))  _scope;

constexpr void __set__scope(int32_t value) ;

constexpr int32_t __get__scope() const;

 System::Xml::Linq::System__Xml__Linq__NamespaceResolver__NamespaceDeclaration __declspec(property(get=__get__declaration, put=__set__declaration))  _declaration;

constexpr void __set__declaration(System::Xml::Linq::System__Xml__Linq__NamespaceResolver__NamespaceDeclaration value) ;

constexpr System::Xml::Linq::System__Xml__Linq__NamespaceResolver__NamespaceDeclaration __get__declaration() const;

 System::Xml::Linq::System__Xml__Linq__NamespaceResolver__NamespaceDeclaration __declspec(property(get=__get__rover, put=__set__rover))  _rover;

constexpr void __set__rover(System::Xml::Linq::System__Xml__Linq__NamespaceResolver__NamespaceDeclaration value) ;

constexpr System::Xml::Linq::System__Xml__Linq__NamespaceResolver__NamespaceDeclaration __get__rover() const;


// Methods

/// @brief Method PushScope addr 0x26cd5b4 size 0x10 virtual false final false
 void PushScope() ;

/// @brief Method PopScope addr 0x26cd660 size 0x78 virtual false final false
 void PopScope() ;

/// @brief Method Add addr 0x26cd5c4 size 0x9c virtual false final false
 void Add(::StringW prefix, System::Xml::Linq::XNamespace ns) ;

/// @brief Method AddFirst addr 0x26cd448 size 0x98 virtual false final false
 void AddFirst(::StringW prefix, System::Xml::Linq::XNamespace ns) ;

/// @brief Method GetPrefixOfNamespace addr 0x26cd308 size 0xdc virtual false final false
 ::StringW GetPrefixOfNamespace(System::Xml::Linq::XNamespace ns, bool allowDefaultNamespace) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml::Linq
NEED_NO_BOX(System::Xml::Linq::System__Xml__Linq__NamespaceResolver__NamespaceDeclaration);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Linq::System__Xml__Linq__NamespaceResolver__NamespaceDeclaration, "System.Xml.Linq", "NamespaceResolver/NamespaceDeclaration");
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Linq::NamespaceResolver, "System.Xml.Linq", "NamespaceResolver");
