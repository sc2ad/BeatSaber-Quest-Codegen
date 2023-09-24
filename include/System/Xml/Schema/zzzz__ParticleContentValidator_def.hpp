#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__ContentValidator_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Xml::Schema {
class SymbolsDictionary;
}
namespace System::Xml::Schema {
class SyntaxTreeNode;
}
namespace System::Xml::Schema {
class BitSet;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System::Xml::Schema {
class NamespaceList;
}
namespace System::Collections {
class Stack;
}
namespace System::Xml::Schema {
class InteriorNode;
}
namespace System::Xml::Schema {
struct XmlSchemaContentType;
}
namespace System::Xml::Schema {
class ContentValidator;
}
namespace System::Xml::Schema {
class Positions;
}
// Forward declare root types
namespace System::Xml::Schema {
class ParticleContentValidator;
}
// Type: System.Xml.Schema::ParticleContentValidator
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11552))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11553))
// CS Name: System.Xml.Schema.ParticleContentValidator
class CORDL_TYPE ParticleContentValidator : public System::Xml::Schema::ContentValidator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~ParticleContentValidator() = default;

// Ctor Parameters [CppParam { name: "", ty: "ParticleContentValidator", modifiers: " const&", def_value: None }]
constexpr ParticleContentValidator(ParticleContentValidator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ParticleContentValidator", modifiers: "&&", def_value: None }]
constexpr ParticleContentValidator(ParticleContentValidator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ParticleContentValidator(void* ptr) noexcept : System::Xml::Schema::ContentValidator(ptr) {
}


  constexpr ParticleContentValidator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ParticleContentValidator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ParticleContentValidator& operator=(ParticleContentValidator&& o) noexcept = default;
  constexpr ParticleContentValidator& operator=(ParticleContentValidator const& o) noexcept = default;
                


// Fields

 System::Xml::Schema::SymbolsDictionary __declspec(property(get=__get_symbols, put=__set_symbols))  symbols;

constexpr void __set_symbols(System::Xml::Schema::SymbolsDictionary value) ;

constexpr System::Xml::Schema::SymbolsDictionary __get_symbols() const;

 System::Xml::Schema::Positions __declspec(property(get=__get_positions, put=__set_positions))  positions;

constexpr void __set_positions(System::Xml::Schema::Positions value) ;

constexpr System::Xml::Schema::Positions __get_positions() const;

 System::Collections::Stack __declspec(property(get=__get_stack, put=__set_stack))  stack;

constexpr void __set_stack(System::Collections::Stack value) ;

constexpr System::Collections::Stack __get_stack() const;

 System::Xml::Schema::SyntaxTreeNode __declspec(property(get=__get_contentNode, put=__set_contentNode))  contentNode;

constexpr void __set_contentNode(System::Xml::Schema::SyntaxTreeNode value) ;

constexpr System::Xml::Schema::SyntaxTreeNode __get_contentNode() const;

 bool __declspec(property(get=__get_isPartial, put=__set_isPartial))  isPartial;

constexpr void __set_isPartial(bool value) ;

constexpr bool __get_isPartial() const;

 int32_t __declspec(property(get=__get_minMaxNodesCount, put=__set_minMaxNodesCount))  minMaxNodesCount;

constexpr void __set_minMaxNodesCount(int32_t value) ;

constexpr int32_t __get_minMaxNodesCount() const;

 bool __declspec(property(get=__get_enableUpaCheck, put=__set_enableUpaCheck))  enableUpaCheck;

constexpr void __set_enableUpaCheck(bool value) ;

constexpr bool __get_enableUpaCheck() const;


// Methods

static System::Xml::Schema::ParticleContentValidator New_ctor(System::Xml::Schema::XmlSchemaContentType contentType) ;

/// @brief Method .ctor addr 0x271b550 size 0x8 virtual false final false
 void _ctor(System::Xml::Schema::XmlSchemaContentType contentType) ;

static System::Xml::Schema::ParticleContentValidator New_ctor(System::Xml::Schema::XmlSchemaContentType contentType, bool enableUpaCheck) ;

/// @brief Method .ctor addr 0x271b558 size 0x7c virtual false final false
 void _ctor(System::Xml::Schema::XmlSchemaContentType contentType, bool enableUpaCheck) ;

/// @brief Method Start addr 0x271b5d4 size 0xb8 virtual false final false
 void Start() ;

/// @brief Method OpenGroup addr 0x271b68c size 0x28 virtual false final false
 void OpenGroup() ;

/// @brief Method CloseGroup addr 0x271b6b4 size 0x150 virtual false final false
 void CloseGroup() ;

/// @brief Method Exists addr 0x271b804 size 0x38 virtual false final false
 bool Exists(System::Xml::XmlQualifiedName name) ;

/// @brief Method AddName addr 0x271b83c size 0xac virtual false final false
 void AddName(System::Xml::XmlQualifiedName name, ::bs_hook::Il2CppWrapperType particle) ;

/// @brief Method AddNamespaceList addr 0x271b9c4 size 0x90 virtual false final false
 void AddNamespaceList(System::Xml::Schema::NamespaceList namespaceList, ::bs_hook::Il2CppWrapperType particle) ;

/// @brief Method AddLeafNode addr 0x271b8e8 size 0xdc virtual false final false
 void AddLeafNode(System::Xml::Schema::SyntaxTreeNode node) ;

/// @brief Method AddChoice addr 0x271ba54 size 0xe0 virtual false final false
 void AddChoice() ;

/// @brief Method AddSequence addr 0x271bb34 size 0xe0 virtual false final false
 void AddSequence() ;

/// @brief Method AddStar addr 0x271bc14 size 0x64 virtual false final false
 void AddStar() ;

/// @brief Method AddPlus addr 0x271bdc8 size 0x64 virtual false final false
 void AddPlus() ;

/// @brief Method AddQMark addr 0x271be2c size 0x64 virtual false final false
 void AddQMark() ;

/// @brief Method Closure addr 0x271bc78 size 0x150 virtual false final false
 void Closure(System::Xml::Schema::InteriorNode node) ;

/// @brief Method Finish addr 0x271be90 size 0x568 virtual false final false
 System::Xml::Schema::ContentValidator Finish(bool useDFA) ;

/// @brief Method CalculateTotalFollowposForRangeNodes addr 0x271c3f8 size 0x2e4 virtual false final false
 ::ArrayW<System::Xml::Schema::BitSet> CalculateTotalFollowposForRangeNodes(System::Xml::Schema::BitSet firstpos, ::ArrayW<System::Xml::Schema::BitSet> followpos, ByRef<System::Xml::Schema::BitSet> posWithRangeTerminals) ;

/// @brief Method CheckCMUPAWithLeafRangeNodes addr 0x271c84c size 0x178 virtual false final false
 void CheckCMUPAWithLeafRangeNodes(System::Xml::Schema::BitSet curpos) ;

/// @brief Method GetApplicableMinMaxFollowPos addr 0x271c6dc size 0x170 virtual false final false
 System::Xml::Schema::BitSet GetApplicableMinMaxFollowPos(System::Xml::Schema::BitSet curpos, System::Xml::Schema::BitSet posWithRangeTerminals, ::ArrayW<System::Xml::Schema::BitSet> minmaxFollowPos) ;

/// @brief Method CheckUniqueParticleAttribution addr 0x271ca84 size 0x88 virtual false final false
 void CheckUniqueParticleAttribution(System::Xml::Schema::BitSet firstpos, ::ArrayW<System::Xml::Schema::BitSet> followpos) ;

/// @brief Method CheckUniqueParticleAttribution addr 0x271d200 size 0x1bc virtual false final false
 void CheckUniqueParticleAttribution(System::Xml::Schema::BitSet curpos) ;

/// @brief Method BuildTransitionTable addr 0x271cb0c size 0x598 virtual false final false
 ::ArrayW<::ArrayW<int32_t>> BuildTransitionTable(System::Xml::Schema::BitSet firstpos, ::ArrayW<System::Xml::Schema::BitSet> followpos, int32_t endMarkerPos) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::ParticleContentValidator);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::ParticleContentValidator, "System.Xml.Schema", "ParticleContentValidator");
