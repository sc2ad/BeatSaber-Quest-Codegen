#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
template<typename TFirst,typename TSecond>
class BidirectionalDictionary_2;
}
namespace Newtonsoft::Json::Utilities {
template<::cordl_internals::il2cpp_reference_type TFirst,::cordl_internals::il2cpp_reference_type TSecond>
class BidirectionalDictionary_2<TFirst,TSecond>;
}
// Type: Newtonsoft.Json.Utilities::BidirectionalDictionary`2
// Type: Newtonsoft.Json.Utilities::BidirectionalDictionary`2
namespace Newtonsoft::Json::Utilities {
// cpp template
template<::cordl_internals::il2cpp_reference_type TFirst,::cordl_internals::il2cpp_reference_type TSecond>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11811))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11811), inst: 80 })
// CS Name: Newtonsoft.Json.Utilities.BidirectionalDictionary`2
class CORDL_TYPE BidirectionalDictionary_2<TFirst,TSecond> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~BidirectionalDictionary_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "BidirectionalDictionary_2", modifiers: " const&", def_value: None }]
constexpr BidirectionalDictionary_2(BidirectionalDictionary_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BidirectionalDictionary_2", modifiers: "&&", def_value: None }]
constexpr BidirectionalDictionary_2(BidirectionalDictionary_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BidirectionalDictionary_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BidirectionalDictionary_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BidirectionalDictionary_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BidirectionalDictionary_2& operator=(BidirectionalDictionary_2&& o) noexcept = default;
  constexpr BidirectionalDictionary_2& operator=(BidirectionalDictionary_2 const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::IDictionary_2<TFirst,TSecond> __declspec(property(get=__get__firstToSecond, put=__set__firstToSecond))  _firstToSecond;

constexpr void __set__firstToSecond(::System::Collections::Generic::IDictionary_2<TFirst,TSecond> value) ;

constexpr ::System::Collections::Generic::IDictionary_2<TFirst,TSecond> __get__firstToSecond() const;

 ::System::Collections::Generic::IDictionary_2<TSecond,TFirst> __declspec(property(get=__get__secondToFirst, put=__set__secondToFirst))  _secondToFirst;

constexpr void __set__secondToFirst(::System::Collections::Generic::IDictionary_2<TSecond,TFirst> value) ;

constexpr ::System::Collections::Generic::IDictionary_2<TSecond,TFirst> __get__secondToFirst() const;

 ::StringW __declspec(property(get=__get__duplicateFirstErrorMessage, put=__set__duplicateFirstErrorMessage))  _duplicateFirstErrorMessage;

constexpr void __set__duplicateFirstErrorMessage(::StringW value) ;

constexpr ::StringW __get__duplicateFirstErrorMessage() const;

 ::StringW __declspec(property(get=__get__duplicateSecondErrorMessage, put=__set__duplicateSecondErrorMessage))  _duplicateSecondErrorMessage;

constexpr void __set__duplicateSecondErrorMessage(::StringW value) ;

constexpr ::StringW __get__duplicateSecondErrorMessage() const;


// Methods

// Ctor Parameters []
explicit BidirectionalDictionary_2() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "firstEqualityComparer", ty: "::System::Collections::Generic::IEqualityComparer_1<TFirst>", modifiers: "", def_value: None }, CppParam { name: "secondEqualityComparer", ty: "::System::Collections::Generic::IEqualityComparer_1<TSecond>", modifiers: "", def_value: None }]
explicit BidirectionalDictionary_2(::System::Collections::Generic::IEqualityComparer_1<TFirst> firstEqualityComparer, ::System::Collections::Generic::IEqualityComparer_1<TSecond> secondEqualityComparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IEqualityComparer_1<TFirst> firstEqualityComparer, ::System::Collections::Generic::IEqualityComparer_1<TSecond> secondEqualityComparer) ;

// Ctor Parameters [CppParam { name: "firstEqualityComparer", ty: "::System::Collections::Generic::IEqualityComparer_1<TFirst>", modifiers: "", def_value: None }, CppParam { name: "secondEqualityComparer", ty: "::System::Collections::Generic::IEqualityComparer_1<TSecond>", modifiers: "", def_value: None }, CppParam { name: "duplicateFirstErrorMessage", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "duplicateSecondErrorMessage", ty: "::StringW", modifiers: "", def_value: None }]
explicit BidirectionalDictionary_2(::System::Collections::Generic::IEqualityComparer_1<TFirst> firstEqualityComparer, ::System::Collections::Generic::IEqualityComparer_1<TSecond> secondEqualityComparer, ::StringW duplicateFirstErrorMessage, ::StringW duplicateSecondErrorMessage) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IEqualityComparer_1<TFirst> firstEqualityComparer, ::System::Collections::Generic::IEqualityComparer_1<TSecond> secondEqualityComparer, ::StringW duplicateFirstErrorMessage, ::StringW duplicateSecondErrorMessage) ;

/// @brief Method Set addr 0x0 size 0xffffffffffffffff virtual false final false
 void Set(TFirst first, TSecond second) ;

/// @brief Method TryGetByFirst addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TryGetByFirst(TFirst first, ByRef<TSecond> second) ;

/// @brief Method TryGetBySecond addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TryGetBySecond(TSecond second, ByRef<TFirst> first) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Utilities
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Utilities::BidirectionalDictionary_2, "Newtonsoft.Json.Utilities", "BidirectionalDictionary`2");
