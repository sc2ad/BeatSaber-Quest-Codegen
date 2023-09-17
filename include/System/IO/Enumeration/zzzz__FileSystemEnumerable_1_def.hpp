#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/IO/Enumeration/zzzz__FileSystemEnumerator_1_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::IO {
class EnumerationOptions;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::IO::Enumeration {
struct FileSystemEntry;
}
// Forward declare root types
namespace System::IO::Enumeration {
template<typename TResult>
class FileSystemEnumerable_1;
}
namespace System::IO::Enumeration {
template<typename TResult>
class ____System__IO__Enumeration__FileSystemEnumerable_1__DelegateEnumerator;
}
namespace System::IO::Enumeration {
template<typename TResult>
class ____System__IO__Enumeration__FileSystemEnumerable_1__FindPredicate;
}
namespace System::IO::Enumeration {
template<typename TResult>
class ____System__IO__Enumeration__FileSystemEnumerable_1__FindTransform;
}
namespace System::IO::Enumeration {
template<::cordl_internals::il2cpp_reference_type TResult>
class FileSystemEnumerable_1<TResult>;
}
namespace System::IO::Enumeration {
template<::cordl_internals::il2cpp_reference_type TResult>
class ____System__IO__Enumeration__FileSystemEnumerable_1__DelegateEnumerator<TResult>;
}
namespace System::IO::Enumeration {
template<::cordl_internals::il2cpp_reference_type TResult>
class ____System__IO__Enumeration__FileSystemEnumerable_1__FindPredicate<TResult>;
}
namespace System::IO::Enumeration {
template<::cordl_internals::il2cpp_reference_type TResult>
class ____System__IO__Enumeration__FileSystemEnumerable_1__FindTransform<TResult>;
}
// Type: ::FindPredicate
// Type: ::FindTransform
// Type: ::DelegateEnumerator
// Type: System.IO.Enumeration::FileSystemEnumerable`1
// Type: ::FindPredicate
namespace System::IO::Enumeration {
// cpp template
template<::cordl_internals::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3628)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3628), inst: 2 })
// CS Name: System.IO.Enumeration.FileSystemEnumerable`1::FindPredicate
class CORDL_TYPE ____System__IO__Enumeration__FileSystemEnumerable_1__FindPredicate<TResult> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____System__IO__Enumeration__FileSystemEnumerable_1__FindPredicate() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__IO__Enumeration__FileSystemEnumerable_1__FindPredicate", modifiers: " const&", def_value: None }]
constexpr ____System__IO__Enumeration__FileSystemEnumerable_1__FindPredicate(____System__IO__Enumeration__FileSystemEnumerable_1__FindPredicate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__IO__Enumeration__FileSystemEnumerable_1__FindPredicate", modifiers: "&&", def_value: None }]
constexpr ____System__IO__Enumeration__FileSystemEnumerable_1__FindPredicate(____System__IO__Enumeration__FileSystemEnumerable_1__FindPredicate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__IO__Enumeration__FileSystemEnumerable_1__FindPredicate(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____System__IO__Enumeration__FileSystemEnumerable_1__FindPredicate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__IO__Enumeration__FileSystemEnumerable_1__FindPredicate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__IO__Enumeration__FileSystemEnumerable_1__FindPredicate& operator=(____System__IO__Enumeration__FileSystemEnumerable_1__FindPredicate&& o) noexcept = default;
  constexpr ____System__IO__Enumeration__FileSystemEnumerable_1__FindPredicate& operator=(____System__IO__Enumeration__FileSystemEnumerable_1__FindPredicate const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____System__IO__Enumeration__FileSystemEnumerable_1__FindPredicate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(ByRef<::System::IO::Enumeration::FileSystemEntry> entry) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO::Enumeration
// Type: ::FindTransform
namespace System::IO::Enumeration {
// cpp template
template<::cordl_internals::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(3629))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3629), inst: 2 })
// CS Name: System.IO.Enumeration.FileSystemEnumerable`1::FindTransform
class CORDL_TYPE ____System__IO__Enumeration__FileSystemEnumerable_1__FindTransform<TResult> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____System__IO__Enumeration__FileSystemEnumerable_1__FindTransform() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__IO__Enumeration__FileSystemEnumerable_1__FindTransform", modifiers: " const&", def_value: None }]
constexpr ____System__IO__Enumeration__FileSystemEnumerable_1__FindTransform(____System__IO__Enumeration__FileSystemEnumerable_1__FindTransform const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__IO__Enumeration__FileSystemEnumerable_1__FindTransform", modifiers: "&&", def_value: None }]
constexpr ____System__IO__Enumeration__FileSystemEnumerable_1__FindTransform(____System__IO__Enumeration__FileSystemEnumerable_1__FindTransform&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__IO__Enumeration__FileSystemEnumerable_1__FindTransform(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____System__IO__Enumeration__FileSystemEnumerable_1__FindTransform& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__IO__Enumeration__FileSystemEnumerable_1__FindTransform& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__IO__Enumeration__FileSystemEnumerable_1__FindTransform& operator=(____System__IO__Enumeration__FileSystemEnumerable_1__FindTransform&& o) noexcept = default;
  constexpr ____System__IO__Enumeration__FileSystemEnumerable_1__FindTransform& operator=(____System__IO__Enumeration__FileSystemEnumerable_1__FindTransform const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____System__IO__Enumeration__FileSystemEnumerable_1__FindTransform(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 TResult Invoke(ByRef<::System::IO::Enumeration::FileSystemEntry> entry) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO::Enumeration
// Type: ::DelegateEnumerator
namespace System::IO::Enumeration {
// cpp template
template<::cordl_internals::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3640)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3640), inst: 1893 }), TypeDefinitionIndex(TypeDefinitionIndex(3630))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3630), inst: 2 })
// CS Name: System.IO.Enumeration.FileSystemEnumerable`1::DelegateEnumerator
class CORDL_TYPE ____System__IO__Enumeration__FileSystemEnumerable_1__DelegateEnumerator<TResult> : public ::System::IO::Enumeration::FileSystemEnumerator_1<TResult> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____System__IO__Enumeration__FileSystemEnumerable_1__DelegateEnumerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__IO__Enumeration__FileSystemEnumerable_1__DelegateEnumerator", modifiers: " const&", def_value: None }]
constexpr ____System__IO__Enumeration__FileSystemEnumerable_1__DelegateEnumerator(____System__IO__Enumeration__FileSystemEnumerable_1__DelegateEnumerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__IO__Enumeration__FileSystemEnumerable_1__DelegateEnumerator", modifiers: "&&", def_value: None }]
constexpr ____System__IO__Enumeration__FileSystemEnumerable_1__DelegateEnumerator(____System__IO__Enumeration__FileSystemEnumerable_1__DelegateEnumerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__IO__Enumeration__FileSystemEnumerable_1__DelegateEnumerator(void* ptr) noexcept : ::System::IO::Enumeration::FileSystemEnumerator_1<TResult>(ptr) {
}


  constexpr ____System__IO__Enumeration__FileSystemEnumerable_1__DelegateEnumerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__IO__Enumeration__FileSystemEnumerable_1__DelegateEnumerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__IO__Enumeration__FileSystemEnumerable_1__DelegateEnumerator& operator=(____System__IO__Enumeration__FileSystemEnumerable_1__DelegateEnumerator&& o) noexcept = default;
  constexpr ____System__IO__Enumeration__FileSystemEnumerable_1__DelegateEnumerator& operator=(____System__IO__Enumeration__FileSystemEnumerable_1__DelegateEnumerator const& o) noexcept = default;
                


// Fields

 ::System::IO::Enumeration::FileSystemEnumerable_1<TResult> __declspec(property(get=__get__enumerable, put=__set__enumerable))  _enumerable;

constexpr void __set__enumerable(::System::IO::Enumeration::FileSystemEnumerable_1<TResult> value) ;

constexpr ::System::IO::Enumeration::FileSystemEnumerable_1<TResult> __get__enumerable() const;


// Methods

// Ctor Parameters [CppParam { name: "enumerable", ty: "::System::IO::Enumeration::FileSystemEnumerable_1<TResult>", modifiers: "", def_value: None }]
explicit ____System__IO__Enumeration__FileSystemEnumerable_1__DelegateEnumerator(::System::IO::Enumeration::FileSystemEnumerable_1<TResult> enumerable) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::IO::Enumeration::FileSystemEnumerable_1<TResult> enumerable) ;

/// @brief Method TransformEntry addr 0x0 size 0xffffffffffffffff virtual true final false
 TResult TransformEntry(ByRef<::System::IO::Enumeration::FileSystemEntry> entry) ;

/// @brief Method ShouldRecurseIntoEntry addr 0x0 size 0xffffffffffffffff virtual true final false
 bool ShouldRecurseIntoEntry(ByRef<::System::IO::Enumeration::FileSystemEntry> entry) ;

/// @brief Method ShouldIncludeEntry addr 0x0 size 0xffffffffffffffff virtual true final false
 bool ShouldIncludeEntry(ByRef<::System::IO::Enumeration::FileSystemEntry> entry) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO::Enumeration
// Type: System.IO.Enumeration::FileSystemEnumerable`1
namespace System::IO::Enumeration {
// cpp template
template<::cordl_internals::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3631))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3631), inst: 2 })
// CS Name: System.IO.Enumeration.FileSystemEnumerable`1
class CORDL_TYPE FileSystemEnumerable_1<TResult> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using DelegateEnumerator = ::System::IO::Enumeration::____System__IO__Enumeration__FileSystemEnumerable_1__DelegateEnumerator<TResult>;

using FindTransform = ::System::IO::Enumeration::____System__IO__Enumeration__FileSystemEnumerable_1__FindTransform<TResult>;

using FindPredicate = ::System::IO::Enumeration::____System__IO__Enumeration__FileSystemEnumerable_1__FindPredicate<TResult>;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<TResult>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<TResult>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~FileSystemEnumerable_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "FileSystemEnumerable_1", modifiers: " const&", def_value: None }]
constexpr FileSystemEnumerable_1(FileSystemEnumerable_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FileSystemEnumerable_1", modifiers: "&&", def_value: None }]
constexpr FileSystemEnumerable_1(FileSystemEnumerable_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FileSystemEnumerable_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr FileSystemEnumerable_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FileSystemEnumerable_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FileSystemEnumerable_1& operator=(FileSystemEnumerable_1&& o) noexcept = default;
  constexpr FileSystemEnumerable_1& operator=(FileSystemEnumerable_1 const& o) noexcept = default;
                


// Fields

 ::System::IO::Enumeration::____System__IO__Enumeration__FileSystemEnumerable_1__DelegateEnumerator<TResult> __declspec(property(get=__get__enumerator, put=__set__enumerator))  _enumerator;

constexpr void __set__enumerator(::System::IO::Enumeration::____System__IO__Enumeration__FileSystemEnumerable_1__DelegateEnumerator<TResult> value) ;

constexpr ::System::IO::Enumeration::____System__IO__Enumeration__FileSystemEnumerable_1__DelegateEnumerator<TResult> __get__enumerator() const;

 ::System::IO::Enumeration::____System__IO__Enumeration__FileSystemEnumerable_1__FindTransform<TResult> __declspec(property(get=__get__transform, put=__set__transform))  _transform;

constexpr void __set__transform(::System::IO::Enumeration::____System__IO__Enumeration__FileSystemEnumerable_1__FindTransform<TResult> value) ;

constexpr ::System::IO::Enumeration::____System__IO__Enumeration__FileSystemEnumerable_1__FindTransform<TResult> __get__transform() const;

 ::System::IO::EnumerationOptions __declspec(property(get=__get__options, put=__set__options))  _options;

constexpr void __set__options(::System::IO::EnumerationOptions value) ;

constexpr ::System::IO::EnumerationOptions __get__options() const;

 ::StringW __declspec(property(get=__get__directory, put=__set__directory))  _directory;

constexpr void __set__directory(::StringW value) ;

constexpr ::StringW __get__directory() const;

 ::System::IO::Enumeration::____System__IO__Enumeration__FileSystemEnumerable_1__FindPredicate<TResult> __declspec(property(get=__get__ShouldIncludePredicate_k__BackingField, put=__set__ShouldIncludePredicate_k__BackingField))  _ShouldIncludePredicate_k__BackingField;

constexpr void __set__ShouldIncludePredicate_k__BackingField(::System::IO::Enumeration::____System__IO__Enumeration__FileSystemEnumerable_1__FindPredicate<TResult> value) ;

constexpr ::System::IO::Enumeration::____System__IO__Enumeration__FileSystemEnumerable_1__FindPredicate<TResult> __get__ShouldIncludePredicate_k__BackingField() const;

 ::System::IO::Enumeration::____System__IO__Enumeration__FileSystemEnumerable_1__FindPredicate<TResult> __declspec(property(get=__get__ShouldRecursePredicate_k__BackingField, put=__set__ShouldRecursePredicate_k__BackingField))  _ShouldRecursePredicate_k__BackingField;

constexpr void __set__ShouldRecursePredicate_k__BackingField(::System::IO::Enumeration::____System__IO__Enumeration__FileSystemEnumerable_1__FindPredicate<TResult> value) ;

constexpr ::System::IO::Enumeration::____System__IO__Enumeration__FileSystemEnumerable_1__FindPredicate<TResult> __get__ShouldRecursePredicate_k__BackingField() const;


// Properties

 ::System::IO::Enumeration::____System__IO__Enumeration__FileSystemEnumerable_1__FindPredicate<TResult> __declspec(property(get=get_ShouldIncludePredicate, put=set_ShouldIncludePredicate))  ShouldIncludePredicate;

 ::System::IO::Enumeration::____System__IO__Enumeration__FileSystemEnumerable_1__FindPredicate<TResult> __declspec(property(get=get_ShouldRecursePredicate))  ShouldRecursePredicate;


// Methods

// Ctor Parameters [CppParam { name: "directory", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "transform", ty: "::System::IO::Enumeration::____System__IO__Enumeration__FileSystemEnumerable_1__FindTransform<TResult>", modifiers: "", def_value: None }, CppParam { name: "options", ty: "::System::IO::EnumerationOptions", modifiers: "", def_value: None }]
explicit FileSystemEnumerable_1(::StringW directory, ::System::IO::Enumeration::____System__IO__Enumeration__FileSystemEnumerable_1__FindTransform<TResult> transform, ::System::IO::EnumerationOptions options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::StringW directory, ::System::IO::Enumeration::____System__IO__Enumeration__FileSystemEnumerable_1__FindTransform<TResult> transform, ::System::IO::EnumerationOptions options) ;

/// @brief Method get_ShouldIncludePredicate addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::IO::Enumeration::____System__IO__Enumeration__FileSystemEnumerable_1__FindPredicate<TResult> get_ShouldIncludePredicate() ;

/// @brief Method set_ShouldIncludePredicate addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_ShouldIncludePredicate(::System::IO::Enumeration::____System__IO__Enumeration__FileSystemEnumerable_1__FindPredicate<TResult> value) ;

/// @brief Method get_ShouldRecursePredicate addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::IO::Enumeration::____System__IO__Enumeration__FileSystemEnumerable_1__FindPredicate<TResult> get_ShouldRecursePredicate() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::IEnumerator_1<TResult> GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO::Enumeration
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::IO::Enumeration::FileSystemEnumerable_1, "System.IO.Enumeration", "FileSystemEnumerable`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::IO::Enumeration::____System__IO__Enumeration__FileSystemEnumerable_1__DelegateEnumerator, "System.IO.Enumeration", "FileSystemEnumerable`1/DelegateEnumerator");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::IO::Enumeration::____System__IO__Enumeration__FileSystemEnumerable_1__FindPredicate, "System.IO.Enumeration", "FileSystemEnumerable`1/FindPredicate");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::IO::Enumeration::____System__IO__Enumeration__FileSystemEnumerable_1__FindTransform, "System.IO.Enumeration", "FileSystemEnumerable`1/FindTransform");
